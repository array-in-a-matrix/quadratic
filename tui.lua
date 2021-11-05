--  requires
local ltui        = require("ltui")
local label       = ltui.label
local button      = ltui.button
local application = ltui.application
local event       = ltui.event
local rect        = ltui.rect
local inputdialog = ltui.inputdialog

-- the demo application
local demo = application()

-- init demo
function demo:init()

    -- init name
    application.init(self, "demo")

    -- init background
    self:background_set("blue")

    -- init input dialog
    self:insert(self:dialog_input(), {centerx = true, centery = true})
end

-- input dialog
function demo:dialog_input()
    local dialog_input = self._DIALOG_INPUT
    if not dialog_input then
        dialog_input = inputdialog:new("dialog.input", rect{0, 0, math.floor(self:width() / 2), math.floor(self:height() / 3)})
        dialog_input:text():text_set("please input text:")
        dialog_input:button_add("no", "< No >", function (v) dialog_input:quit() end)
        dialog_input:button_add("yes", "< Yes >", function (v) dialog_input:quit() end)
        self._DIALOG_INPUT = dialog_input
    end
    return dialog_input
end

-- on resize
function demo:on_resize()
    self:dialog_input():bounds_set(rect{0, 0, math.floor(self:width() / 2), math.floor(self:height() / 3)})
    self:center(self:dialog_input(), {centerx = true, centery = true})
    application.on_resize(self)
end

-- run demo
demo:run()
