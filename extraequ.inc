;Extra equates include file, from the unsupported info page.
;Last update: 07/16/01

_LdHLInd		equ 4009h
_NewLine		equ 452Eh
_Mon			equ 401Eh
_PutAway		equ 403Ch
_AppInit		equ 404Bh
_IsA2ByteTok	equ 42A3h
_BufLeft		equ 4903h
_BufRight		equ 4906h
_BufDelete		equ 4912h
_BufReplace		equ 490Fh
_BufDelete		equ 4912h
_CloseEditEqu	equ 496Ch
_DispTail		equ 495Dh
_GetPrevTok		equ 496Fh
_CursorLeft		equ 493Fh
_IsEditEmpty	equ 492Dh
_IsAtTop		equ 4930h
_IsAtBtm		equ 4933h
_DispEOW		equ 4957h
_BufClear		equ 4936h
_EraseEOW		equ 4555h
_DispHead		equ 495Ah
_ClrWindow		equ 454Fh
_DispForward	equ 49D5h
_InsDisp		equ 494Eh
_CursorDown		equ 4948h
_SetEmptyEditPtr	equ 4969h
_HomeUp		equ 4558h



APIFlg		equ 40
appAllowContext	equ 0           ; App wants context changes to happen
cmdFlags		equ 12		;command editor flags
cmdVirgin		equ 5		; 1=nothing has been typed in cmd bfr