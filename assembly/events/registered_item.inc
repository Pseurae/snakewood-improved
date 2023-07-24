.global EventScript_UseRegisteredItem

EventScript_UseRegisteredItem:
    lockall
    callnative DrawRegisteredItemsMultichoice
    waitstate
    callnative UseSelectedRegisteredItem
    callnative HideFieldMessageBoxInstant
    releaseall
    return
