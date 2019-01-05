<!DOCTYPE html>
<html lang="en">
<head>
    <title>Ducky Encoder</title>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link id='thispagestyle' rel="stylesheet" type='text/css' href="https://bootswatch.com/4/darkly/bootstrap.min.css">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
    <style type="text/css">
        textarea {
            padding-left: 10px;
            padding-top: 5px;
            border-color: #ccc;
            height: 100%;
            width: 100%;
            box-sizing: border-box;
            -moz-box-sizing: border-box;
            -webkit-box-sizing: border-box;
        }
        .container-fluid {
            padding-top: 1%;
        }
        .hidden {
            display: none;
        }
        .visible {
            display: block;
        }
    </style>
</head>
<body>
<div class="container-fluid" style="margin-bottom: 15px;">
    <div class="jumbotron"> <!-- main container -->
        <div id="helpDiv" class='hidden'> <!-- TOGGLABLE HIDDEN HELP DIV -->
            <div>
                <div>
                    <div>
                        <div> <!--class="panel-heading"-->
                            <h2>USB Rubber Ducky Help</h2>
                            <button type="submit" class="btn btn-outline-info" name="btnHideHelp" id="btnHideHelp"
                                    onclick="hideHelp()" style="float: right; margin-right: 5px">Minimize Help
                            </button>
                        </div>
                        <div> <!--class="panel-body"-->
                            <br>
                            <h5>
                                Where to start:
                            </h5>
                            <div class="list-group" style="max-width: 20rem;">
                                <a target='_blank' class="list-group-item list-group-item-action"
                                   href=" https://www.hak5.org/gear/duck/the-ducking-workflow-usb-rubber-ducky-101"> The Workflow</a>
                                <a target='_blank' class="list-group-item list-group-item-action"
                                   href="javascript:importHelloWorld()"> Get Started with a Hello World!</a>
                                <a target='_blank' class="list-group-item list-group-item-action"
                                   href="https://www.hak5.org/gear/duck/ducky-script-usb-rubber-ducky-101">
                                    Ducky 101 </a>
                                <a target='_blank' class="list-group-item list-group-item-action"
                                   href="https://github.com/hak5darren/USB-Rubber-Ducky/wiki/Payloads"> Pre-written
                                    Payloads </a>
                                <a target='_blank' class="list-group-item list-group-item-action"
                                   href="https://github.com/hak5darren/USB-Rubber-Ducky/wiki"> Ducky Wiki Home </a>
                                <a target='_blank' class="list-group-item list-group-item-action"
                                   href="https://forums.hak5.org/forum/56-usb-rubber-ducky/"> Hak5 Forums: USB Rubber
                                    Ducky</a>
                                <a target='_blank' class="list-group-item list-group-item-action"
                                   href="https://usbrubberducky.com/setup"> Updates </a>
                                <br>
                            </div>
                            <div class="card border-primary mb-3">
                                <div class="card-header">Ducky Script Syntax</div>
                                <div class="card-body">
                                    <h4 class="card-title">Script Commands:</h4>
                                    <p class="card-text">
                                    <pre><code>
ALT [key name] (ex: ALT F4, ALT SPACE)
CTRL | CONTROL [key name] (ex: CTRL ESC)
CTRL-ALT [key name] (ex: CTRL-ALT DEL)
CTRL-SHIFT [key name] (ex: CTRL-SHIFT ESC)
DEFAULT_DELAY | DEFAULTDELAY [Time in millisecond] (change the delay between each command)
DELAY [Time in millisecond] (used to overide temporary the default delay)
GUI | WINDOWS [key name] (ex: GUI r, GUI l)
REM [anything] (used to comment your code, no obligation :) )
ALT-SHIFT (swap language)
SHIFT [key name] (ex: SHIFT DEL)
STRING [any character of your layout]
STRING_DELAY [Number] [any character of your layout] (Number is ms delay between each character)
REPEAT [Number] (Repeat last instruction N times)
[key name] (anything in the keyboard.properties)</code></pre>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>  <!-- /TOGGLABLE HIDDEN HELP DIV -->
        <div> <!-- DUCKY EDITOR DIV --> <!--class="row" -->
            <div>
                <div>
                    <div> <!-- header -->
                        <h1 class="display-3">Ducky Encoder</h1>
                        <p class="lead">Ducky Script payload generator: the language of the USB Rubber Ducky</p>
                        <hr class="my-4">
                    </div>
                    <div> <!--class="panel-body"-->
                        <!-- MAIN BUTTON CONTROLS -->
                        <div id="mainControlGroup">
                            <button type="submit" title='Upload an existing Ducky Script txt file to edit and encode!'
                                    class="btn btn-default" name="btnUandEDS" id="btnUandEDS" onclick="toggleDSUpload()">
                                Insert Ducky Script From Text File
                            </button>
                            <button type="submit" title='Click to change the layout from the DEFAULT: US'
                                    class="btn btn-default" name="btnUKBD" id="btnUKBD" onclick="toggleChangeKBD()">Change
                                Keyboard Layout
                            </button> <b style="display:inline;margin-left: 20px;" id="currentLang">Layout: US</b>
                            <!-- control right float -->
                            <div style="display: inline;float: right;">
                                <button type="submit" class="btn btn-secondary" name="btnExtraFunctions"
                                        id="btnExtraFunctions" onclick="toggleShowExtraFunctions()">Show Extra Functions
                                </button>
                                <button type="submit" class="btn btn-info" name="btnHelp" id="btnHelp"
                                        onclick="showHelp()">Help
                                </button>
                            </div>
                            <!-- /control right float -->
                            <hr class="my-4">
                        </div>
                        <!-- HIDDEN UPLOAD KBD LAYOUT DIV -->
                        <div id='uploadKBDDiv' class='hidden'>
                            <hr class="my-1">
                            <h4>
                                Upload JSON Keyboard Map
                                <button type="submit" title='Set to US' class="btn btn-outline-danger"
                                        name="btnResetKBD" id="btnResetKBD" onclick="resetKBDUpload()"
                                        style="float: right; margin-right: 5px">Reset to Default
                                </button>
                            </h4>
                            <p> More info on the format of these files can be found here:
                                <a target='_blank' href="https://github.com/hak5/bashbunny-payloads/tree/master/languages">Hak5
                                GitHub</a></p>
                            <input type="file" id="file-input"/>
                            <details open>
                                <summary>View Layout Contents</summary>
                                <p>
                                <pre id="file-content" style="max-height: 150px;"></pre>
                            </details>
                            <hr class="my-1">
                            <br>
                        </div>
                        <!-- HIDDEN UPLOAD DS DIV -->
                        <div id='uploadDSDiv' class='hidden'>
                            <hr class="my-1">
                            <h4>
                                Upload DuckyScript.txt
                                <button type="submit" title='Remove Uploaded DuckyScript.txt'
                                        class="btn btn-outline-danger" name="btnResetDSUpload" id="btnResetDSUpload"
                                        onclick="resetDSUpload()" style="float: right; margin-right: 5px">Clear Upload
                                </button>
                            </h4>
                            <p>This feature is for uploading an already written or in progress DuckyScript.txt to encode.<br>
                                <details><summary>READ ME</summary>
                                    <h4><b>CAUTION</b></h4>
                                    Uploading a random file here (ex: HTML) will <i>technically work</i>,<br>
                                    <b>but it is encoding <i>ONLY</i> the first character of each line</b>; see "Help" for syntax.<br><br>
                                    If you want to inject text from a file use the feature in "Show Extra Functions"
                                </details>
                            </p>
                            <input type="file" id="ds-file-input"/>
                            <details open>
                                <summary>View DuckyScript Contents</summary>
                                <p>
                                <pre id="ds-file-content" style="max-height: 150px;"></pre>
                            </details>
                            <hr class="my-1">
                            <br><br> <!-- may remove -->
                        </div>
                        <!-- HIDDEN EXTRA FEATURE DIV -->
                        <div id='extraFunctions' class='hidden'>
                            <form id="debugmodeform">
                                <div class="form-check">
                                    <label class="form-check-label">
                                        <input id='debugmodecheck' class="form-check-input" type="checkbox">
                                        Enable debug logging in browser console at encoding time
                                    </label>
                                </div>
                            </form>
                            <hr class="my-4">
                            <h4>Automatic Ducky Script STRING injection</h4>
                            <p>Does your payload include injecting source code of other languages or the contents of a text file? Use this to add the contents of a text file straight to your editor; it will be wrapped in Ducky Script</p>
                            <input type="file" id="string-file-input"/>
                            <details>
                                <summary>View Raw File Source</summary>
                                <p>
                                <pre id="string-file-content" style="max-height: 150px;"></pre>
                            </details>
                            <br>
                        </div>
                        <hr class="my-2">
                        <h4> Your Ducky Script Editor:
                            <button type="submit" class="btn btn-outline-danger" name="btnClearEditor"
                                    id="btnClearEditor"
                                    onclick="resetEditor()" style="float: right;margin-bottom: 5px">Clear Editor
                            </button>
                        </h4>
                        <textarea id="duckyscript" rows="20" title="Encode"></textarea>
                        <br><br>
                        <button type="submit" class="btn btn-outline-warning" name="duckyencode" id="duckyencode"
                                onclick="doDuckyEncode(document.getElementById('duckyscript').value)">Generate Payload
                        </button>
                        <div style="float: right">
                            <button type="submit" title='Download Current Ducky Script Editor Contents' class="btn btn-outline-success" name="saveCurrentProgress" id="saveCurrentProgress"
                                    onclick="saveCurrentProgress(document.getElementById('duckyscript').value)">Save for later
                            </button>
                        </div>
                        <br><br>
                    </div> <!--class="panel-body"-->
                </div>
            </div>
        </div> <!-- /DUCKY EDITOR DIV -->
        <div id="alerts"><!-- ALERTS EDITOR DIV -->
            <div id='encodeFailure' class='hidden'> <!--PAYLOAD FAILED TO ENCODE alert-->
                <div class="alert alert-dismissible alert-warning">
                    <h4 id="failureHeader" class="alert-heading">Encoder Warnings:</h4>
                    <p class="mb-0">Your script encountered an error during payload encoding: A key or character was not found in your keyboard layout (or maybe the syntax couldn't be parsed correctly). Make sure to check your Ducky Script syntax and keyboard layout. If you continue to receive this error try enabling debug mode or asking for help on the Hak5 Forums. If you want to give the payload a shot anyway we've encoded what we could and is available for download below.</p>
                    <p id='specificErrors' class="mb-0"></p>
                </div>
            </div>
            <div id='encodeSuccessAlert' class="hidden"> <!--SUCCESS alert-->
                <div class="alert alert-dismissible alert-success">
                    <strong>w00t w00t!</strong> Ready to hack the planet <a
                        href="javascript:getAllDLs()" class="alert-link">click here to download both
                    files</a>.
                    <div style="float: right;"><a
                            href="javascript:hideSuccessDownloadLink()" class="alert-link">Dismiss</a>
                    </div>
                </div>
            </div>
            <div id='encodeDirty' class='hidden'> <!--PAYLOAD DIRTY alert-->
                <div class="alert alert-dismissible alert-warning">
                    <h4 class="alert-heading">Your Script Has Changed!</h4>
                    <p class="mb-0">Your script, or keyboard layout has changed since you last generated your payload file.
                        Make sure you hit 'Generate Payload' again to encode your unsaved changes!</p>
                    <br>
                    <button type="submit" class="btn btn-info" name="btnDismissFail" id="btnDismissFail"
                            onclick="hideDirtyAlert()"> Thanks, got it!
                    </button>
                </div>
            </div>
        </div> <!-- /ALERTS EDITOR DIV -->
        <div id='bindl' class="hidden"><!--DOWNLOAD DIV -->
            <div>
                <div>
                    <div>
                        <div> <!-- class="panel-heading" -->
                            <h2>Download your Output:</h2>
                        </div>
                        <div> <!--class="panel-body"-->
                            <button type="submit" class="btn btn-info" name="btnbindl" id="btnbindl"
                                    onclick="getPayload()">Download Payload
                            </button>
                            <button type="submit" class="btn btn-info" name="dsdl" id="dsdl" onclick="getDS()">Download
                                DuckyScript
                            </button>
                            <button type="submit"
                                    title="Remove download options for the encoded payload. This will destroy your work."
                                    class="btn btn-outline-danger" name="btnDismissDLs" id="btnDismissDLs"
                                    onclick="resetDLs()" style="float: right;margin-bottom: 5px">Dismiss Downloads
                            </button>
                            <br><br>
                            <details>
                                <summary>What did I just encode?</summary>
                                <p>
                                <pre id="finalized-file-content" style="max-height: 150px;"></pre>
                            </details>
                        </div>
                    </div>
                </div>
            </div>
        </div><!--/DOWNLOAD DIV -->
        <div id="downloaddebugoutput" class="hidden"> <!--DEBUG DOWNLOAD DIV -->
            <br>
            <button type="submit" class="btn btn-outline-primary" name="btndldebug" id="btndldebug" onclick="getDebugFileOut()">Download
                Debug Output
            </button>
        </div><!--/DEBUG DOWNLOAD DIV -->
    </div> <!-- /main container -->
</div>

<script type="text/javascript">
    const jsDuckyEncoderVersion = 1.0;
    var defaultUSKbdLayout = {'CTRL': '01,00,00', 'CONTROL': '01,00,00', 'SHIFT': '02,00,00', 'ALT': '04,00,00', 'GUI': '08,00,00', 'WINDOWS': '08,00,00', 'CTRL-ALT': '05,00,00', 'CTRL-SHIFT': '03,00,00', 'ALT-SHIFT': '06,00,00', 'COMMAND': '08,00,00', 'COMMAND-CTRL': '09,00,00', 'COMMAND-CTRL-SHIFT': '0B,00,00', 'COMMAND-OPTION': '0C,00,00', 'COMMAND-OPTION-SHIFT': '0E,00,00', 'a': '00,00,04', 'A': '02,00,04', 'b': '00,00,05', 'B': '02,00,05', 'c': '00,00,06', 'C': '02,00,06', 'd': '00,00,07', 'D': '02,00,07', 'e': '00,00,08', 'E': '02,00,08', 'f': '00,00,09', 'F': '02,00,09', 'g': '00,00,0a', 'G': '02,00,0a', 'h': '00,00,0b', 'H': '02,00,0b', 'i': '00,00,0c', 'I': '02,00,0c', 'j': '00,00,0d', 'J': '02,00,0d', 'k': '00,00,0e', 'K': '02,00,0e', 'l': '00,00,0f', 'L': '02,00,0f', 'm': '00,00,10', 'M': '02,00,10', 'n': '00,00,11', 'N': '02,00,11', 'o': '00,00,12', 'O': '02,00,12', 'p': '00,00,13', 'P': '02,00,13', 'q': '00,00,14', 'Q': '02,00,14', 'r': '00,00,15', 'R': '02,00,15', 's': '00,00,16', 'S': '02,00,16', 't': '00,00,17', 'T': '02,00,17', 'u': '00,00,18', 'U': '02,00,18', 'v': '00,00,19', 'V': '02,00,19', 'w': '00,00,1a', 'W': '02,00,1a', 'x': '00,00,1b', 'X': '02,00,1b', 'y': '00,00,1c', 'Y': '02,00,1c', 'z': '00,00,1d', 'Z': '02,00,1d', '1': '00,00,1e', '!': '02,00,1e', '2': '00,00,1f', '@': '02,00,1f', '3': '00,00,20', '#': '02,00,20', '4': '00,00,21', '$': '02,00,21', '5': '00,00,22', '%': '02,00,22', '6': '00,00,23', '^': '02,00,23', '7': '00,00,24', '&': '02,00,24', '8': '00,00,25', '*': '02,00,25', '9': '00,00,26', '(': '02,00,26', '0': '00,00,27', ')': '02,00,27', 'ENTER': '00,00,28', 'ESC': '00,00,29', 'ESCAPE': '00,00,29', 'BACKSPACE': '00,00,2a', 'TAB': '00,00,2b', 'ALT-TAB': '04,00,2b', 'SPACE': '00,00,2c', ' ': '00,00,2c', '-': '00,00,2d', '_': '02,00,2d', '=': '00,00,2e', '+': '02,00,2e', '[': '00,00,2f', '{': '02,00,2f', ']': '00,00,30', '}': '02,00,30', '\\': '00,00,31', '|': '02,00,31', ';': '00,00,33', ':': '02,00,33', "'": '00,00,34', '"': '02,00,34', '`': '00,00,35', '~': '02,00,35', ',': '00,00,36', '<': '02,00,36', '.': '00,00,37', '>': '02,00,37', '/': '00,00,38', '?': '02,00,38', 'CAPSLOCK': '00,00,39', 'F1': '00,00,3a', 'F2': '00,00,3b', 'F3': '00,00,3c', 'F4': '00,00,3d', 'F5': '00,00,3e', 'F6': '00,00,3f', 'F7': '00,00,40', 'F8': '00,00,41', 'F9': '00,00,42', 'F10': '00,00,43', 'F11': '00,00,44', 'F12': '00,00,45', 'PRINTSCREEN': '00,00,46', 'SCROLLLOCK': '00,00,47', 'PAUSE': '00,00,48', 'BREAK': '00,00,48', 'INSERT': '00,00,49', 'HOME': '00,00,4a', 'PAGEUP': '00,00,4b', 'DELETE': '00,00,4c', 'DEL': '00,00,4c', 'END': '00,00,4d', 'PAGEDOWN': '00,00,4e', 'RIGHTARROW': '00,00,4f', 'RIGHT': '00,00,4f', 'LEFTARROW': '00,00,50', 'LEFT': '00,00,50', 'DOWNARROW': '00,00,51', 'DOWN': '00,00,51', 'UPARROW': '00,00,52', 'UP': '00,00,52', 'NUMLOCK': '00,00,53', 'MENU': '00,00,65', 'APP': '00,00,65'};
    var instructionsToIgnore = ['REM', '//', '\n', '', null];
    var kbdLayoutMap = defaultUSKbdLayout;
    var ds = null;
    var lastUsefulInstructionIndex = null;
    var oBB = [];
    var defaultDelay = 0;
    var delayOverride = false;
    var instructionMap = [];
    var debugModeEnabled = false;
    var debugLogs = [];
    var currentInstructionIndex = 0;
    var finalizedDS = null;
    var finalizedOutputBuffer = null;
    var scriptHasBeenEncoded = false;
    var scriptDirty = false;
    var suppressDirtyAlertUntilReencode = false;
    var exitCode = 0;

    /**
     Encoding lookup table
     ---------------------------------------
     instruction treated as keycode if not found
     here (in delegateDsCommand)
     **/
    const dsSyntaxMap = {
        'REPEAT': handleDSRepeat,
        'DEFAULTDELAY': handleDSDefaultDelay,
        'DEFAULT_DELAY': handleDSDefaultDelay,
        'STRING': handleDSString,
        'DELAY': handleDSDelay,
        'STRING_DELAY': handleDSStringDELAY,
        'CTRL': handleDSModifier,
        'CONTROL': handleDSModifier,
        'SHIFT': handleDSModifier,
        'ALT': handleDSModifier,
        'GUI': handleDSModifier,
        'WINDOWS': handleDSModifier,
        'CTRL-ALT': handleDSModifier,
        'CTRL-SHIFT': handleDSModifier,
        'ALT-SHIFT': handleDSModifier,
        'COMMAND': handleDSModifier,
        'COMMAND-CTRL': handleDSModifier,
        'COMMAND-CTRL-SHIFT': handleDSModifier,
        'COMMAND-OPTION': handleDSModifier,
        'COMMAND-OPTION-SHIFT': handleDSModifier
    };

    function dLog(str) {
        if (!debugModeEnabled){
            return null;
        }
        console.log(str);
        debugLogs.push(str);
        return null;
    }

    /**
     Ducky Script Handler Functions
     ---------------------------------------
     Below are the functions that are delegated to for command specfic encoding
     special handling requires an entry in dsSyntaxMap and a corrisponding handler function
     for the encoding
     **/
    function handleDSRepeat(c, args) {
        //dLog('F_REPEAT: ' + c + ' ' + args);
        let loop = parseInt(trimInput(args));
        let instrToRepeat = instructionMap[lastUsefulInstructionIndex];
        let cmd = instrToRepeat[0];
        let a = instrToRepeat[1];
        while (loop > 0) {
            if (instructionsToIgnore.includes(cmd)) {
                return null;
            }
            delegateDSCommand(cmd, a);
            loop--;
        }
        return null;
    }

    function handleDSDelay(c, args) {
        //dLog('F_DELAY: ' + c + ' ' + args);
        delayOverride = true;
        let delay = parseInt(args);
        return buildDelayByteTab(delay); // return bytetab built from delay
    }

    function handleDSDefaultDelay(c, args) {
        //dLog('F_DEFAULTDELAY: ' + c + ' ' + args);
        defaultDelay = parseInt(args);
        delayOverride = true;
        return null;
    }

    function handleDSStringDELAY(c, args) {
        //dLog('F_STRINGDELAY: ' + c + ' ' + args);
        let argSplit = args.split(" ");
        let delayArg = parseInt(argSplit.shift());
        let injString = argSplit.join(" ");

        let tmp = [];
        for (let i = 0; i < injString.length; i++) {
            let ch = null;
            ch = injString.charAt(i);
            let ba = null;
            ba = getBytesForKey(ch);
            if(ba === null || typeof ba === 'undefined'|| ba === []){
                defaultingHexWarning(ch);
            } else if (ba.length > 1 && ba.length < 3) {
                tmp.push(ba[0]);
                tmp.push(ba[1]);
            } else {
                tmp.push(ba[0]);
                tmp.push('00');
            }
            for(let counter = delayArg;counter > 0; counter -= 0xFF){
                tmp.push('00');
                if(counter > 0xFF){
                    tmp.push('FF');
                } else {
                    tmp.push(counter.toString(16));
                }
            }
        }
        return tmp;
    }

    function handleDSString(c, args) {
        //dLog('F_STRING: ' + c + ' ' + args);
        let tmp = [];
        for (let i = 0; i < args.length; i++) {
            let ch = null;
            ch = args.charAt(i);
            let ba = null;
            ba = getBytesForKey(ch);
            if(ba === null || typeof ba === 'undefined'|| ba === []){
                defaultingHexWarning(ch);
            } else if (ba.length > 1 && ba.length < 3) {
                tmp.push(ba[0]);
                tmp.push(ba[1]);
            } else {
                tmp.push(ba[0]);
                tmp.push('00');
            }
        }
        return tmp;
    }

    function handleDSModifier(c, args) {
       // dLog('F_MODIFIER: ' + c + ' ' + args[0]);
        let key = args[0];
        let modHex = getBytesForKey(c);
        let keyHex = getBytesForKey(key);
        if (modHex === null || typeof modHex === 'undefined' || modHex === []){
            modHex = ["00"]
        }
        if (keyHex === null || typeof keyHex === 'undefined' || keyHex === []){
            keyHex = ["00"]
        }
        return [keyHex[0], modHex[0]];
    }

    function startupInputCheck(ds) {
        if (ds === '') {
            alert('No script entered/uploaded to encode! Write, upload or paste one here first before hitting the "Generate Payload" button');
            return false;
        }
    }

    /**
     Main / Runner / Entry point
     ---------------------------------------
     **/
    function doDuckyEncode(duckyscript) {
        hideElement('encodeFailure');
        if (startupInputCheck(duckyscript) === false) {
            return;
        }
        let doDebug = document.getElementById('debugmodecheck').checked;
        document.getElementById('duckyencode').innerHTML = 'Encoding';
        if (typeof doDebug === 'undefined' || doDebug === null ||doDebug === false) {
            debugModeEnabled = false;
        } else {
            debugModeEnabled = true;
            unhideElement('downloaddebugoutput');
        }
        // reset/update - finalized ones are left for downloadability
        debugLogs = [];
        oBB = [];
        ds = duckyscript;

        try {
            let sanitized = sanitizeDS(duckyscript);
            // reject new lines here before parser tries splitting nonsense
            // convert lines that contain only a space to a space here
            let lines = splitDS(sanitized).filter(l => l !== null && l !== '').map((l) => { if (l === " ") { return "SPACE"; } else {return l;}});
            instructionMap = buildInstructionMap(lines);
            // Main parse loop - Encode instructions line by line
            for (let lineNumber in instructionMap) {
                currentInstructionIndex = lineNumber;
                // init/clear
                let command = null;
                let args = null;
                let delayToAdd = null;
                // set
                command = instructionMap[lineNumber][0];
                args = instructionMap[lineNumber][1];
                if (instructionsToIgnore.includes(command)) {
                    continue
                }
                // parse line add to file
                delegateDSCommand(command, args);
                delayToAdd = doDelayCheck();
                if (delayToAdd !== null) {
                    appendHexStringArray(delayToAdd)
                }
                lastUsefulInstructionIndex = lineNumber
            }
        }catch(e){
            exitCode = -1;
        } finally {
            if (exitCode === 0 || exitCode > 0) {
                if (exitCode === 0){
                    //0
                    //hide true
                    encodingSuccess(true);
                } else {
                    // 1
                    //hide false - show warning
                    console.log("script contains characters not found");
                    encodingSuccess(false);
                }
                finalizedDS = ds;
                finalizedOutputBuffer = oBB;
                document.getElementById('finalized-file-content').innerText = finalizedDS;
            }
            else {
                //-1
                // should be impossible lol - fall back
                showFailureAlert(currentInstructionIndex,"idk honestly, computers are hard.");
            }
        }
    }

    function encodingSuccess (warn){
        console.log('Encoding Complete');
        suppressDirtyAlertUntilReencode=false;
        scriptHasBeenEncoded = true;
        scriptDirty = false;
        dLog('DEBUGEND - Encoding Complete');
        unhideElement('bindl');
        if (warn) {
            hideElement('encodeFailure');
        }
        hideElement('encodeDirty');
        unhideElement('encodeSuccessAlert');
        document.getElementById('dsdl').setAttribute('class','btn btn-primary');
        document.getElementById('btnbindl').setAttribute('class','btn btn-primary');
        setButtonToSuccess();
    }

    /**
     Main Encoder Function
     ---------------------------------------
     command - string command
     args - string arguements

     Decides how to handle command+args, encodes them and adds them to the final output buffer
     **/
    function delegateDSCommand(command, args) {
        let fCall = dsSyntaxMap[command];
        if (typeof fCall === 'function') {
            //dLog("Delegating syntax for "+ command);
            let tmpByteTab = fCall.call(this, command, args); // delegate function call
            if (tmpByteTab !== null) { // it should either be a byte array or null
                appendHexStringArray(tmpByteTab);
            }
        } else if (fCall === null || typeof fCall === 'undefined') {
           // dLog("Delegating syntax for "+ command);
            // Syntax not found or (currently defined) modifier, is it a key?
            //this could be " " or "SPACE"
            lookupAndAppend(command);
        } else {
            // this is a character or it was not found
            console.log('Key not found, syntax not understood:' + command + ' ' + args + ' ' + fCall);
            dLog('Key not found, syntax not understood:' + command + ' ' + args + ' ' + fCall);
        }
        return null;
    }

    function defaultingHexWarning (k){
        dLog("WARN - defaulting 0x00 for char: "+k);
        showFailureAlert(currentInstructionIndex,k);
        appendHexStringArray(['00']);
        appendHexStringArray(['00']);
        return null;
    }

    function lookupAndAppend (command) {
        dLog("Key lookup on "+ command);
        let keyCodes = getBytesForKey(command);

        if (!(keyCodes !== null && typeof keyCodes !== 'undefined')){
           // dLog("trying first char "+ command);
            if (command === command.charAt(0)){
                defaultingHexWarning(command);
                return null;
            }
            lookupAndAppend(command.charAt(0));
            return null;
        }
        if (keyCodes.length > 1 && keyCodes.length < 3) {
            appendHexStringArray(keyCodes);
        } else {
            appendHexStringArray(keyCodes);
            appendHexStringArray(['00']);
        }
        return null;
    }

    /**
     Parse lines into an array of instruction tuples
     ---------------------------------------
     **/
    function buildInstructionMap(lines) {
        let lineMap = [];
        for (let i = 0; i < lines.length; i++) {
            let l = lines[i];
            // paranoid resets for debugging sanity
            let command = null;
            let instArgs = null;
            //working array
            let toConsume = null;
            // debugging copy
            let instrArr = null;
            toConsume = splitLine(l);
            instrArr = toConsume.slice(0);
            command = toConsume.shift();
            if (toConsume.length > 0) {
                instArgs = toConsume.join(' ');
            }
            lineMap.push([command, instArgs]);
            dLog([command,instArgs]);
        }
        return lineMap
    }

    /**
     DELAY Helpers
     ---------------------------------------
     **/
    function doDelayCheck() {
        // for default delay
        if (!delayOverride && defaultDelay > 0) {
            return buildDelayByteTab(defaultDelay);
        }
        return null;
    }

    function buildDelayByteTab(d) {
        let tmpTab = [];
        while (d > 0) {
            tmpTab.push('00');
            if (d > 255) {
                tmpTab.push('FF');
                d = d - 255
            } else {
                tmpTab.push(d.toString(16));
                d = 0
            }
        }
        return tmpTab
    }

    /**
     Encoding Helpers
     ------------------------------------
     **/
    // k - key string
    // returns array of size 1 or 2 (ex ["00"] || ["00","00"] (for keys with modifiers))
    function getBytesForKey(k) {
        let c = kbdLayoutMap[k];
        if (c === null || typeof c === 'undefined' || c === []){
            return null;
        }
        let codes = c.split(',');
        let keyCodes = null;
        // char
        if (codes[2] !== '00') {
            keyCodes = [codes[2], codes[0]];
            if (keyCodes[1] === '00') {
                keyCodes.pop();
            }
            // modifier
        } else {
            // default take first byte
            keyCodes = [codes[0]];
        }
        return keyCodes;
    }

    // hexStringArray - array of hex bytes
    // returns null - bytes are appened to final output buffer
    function appendHexStringArray(hexStringArray) {
        for (let i = 0; i < hexStringArray.length; i++) {
            oBB.push(hexStringArray[i]);
        }
        return null;
    }

    // hexString - hex codes in string format converted into
    // returns Uint8Array - hex converted into array of bytes
    function hexToByteArray(hexString) {
        let byteArray = new Uint8Array(hexString.length / 2);
        for (let x = 0; x < byteArray.length; x++) {
            byteArray[x] = parseInt(hexString.substr(x * 2, 2), 16);
        }
        return byteArray;
    }

    // byteArray - Uint8Array to convert into blob
    // returns Blob octet-stream generated from byteArray
    function byteArrayToBlob(byteArray) {
        return new Blob([byteArray], {type: 'application/octet-stream'});
    }

    function finalBufferToByteArray() {
        return hexToByteArray(finalizedOutputBuffer.join(''));
    }

    /**
     FILE helpers
     ------------------------------------
     **/
    function byteArrayToFile () {
        let finalHexStringArray = finalBufferToByteArray();
        let exportBlob = byteArrayToBlob(finalHexStringArray);
        blobToFile(exportBlob, 'inject.bin');
    }

    // out - byte array to generate blob from
    // filename - string name of file to generate
    function blobToFile(out, filename) {
        let blob = new Blob([out], {type: 'application/octet-stream'});
        let objectURL = window.URL.createObjectURL(blob);
        let anchor = document.createElement('a');
        anchor.href = objectURL;
        anchor.download = filename;
        anchor.click();
        URL.revokeObjectURL(objectURL);
    }

    // out - byte array to generate blob from
    // filename - string name of file to generate
    function textToFile(out, filename) {
        let blob = new Blob([out], {type: 'text/plain'});
        let objectURL = window.URL.createObjectURL(blob);
        let anchor = document.createElement('a');
        anchor.href = objectURL;
        anchor.download = filename;
        anchor.click();
        URL.revokeObjectURL(objectURL);
    }

    function readLangFile(e) {
        let file = e.target.files[0];
        if (!file) {
            return;
        }
        let reader = new FileReader();
        reader.onload = function (e) {
            let contents = e.target.result;
            displayJSONContents(contents);
        };
        reader.readAsText(file);
        document.getElementById('btnResetKBD').setAttribute('class', 'btn btn-danger');
        getFileNameFromFileInput('file-input', 'currentLang');
        setDirty();

    }

    function getFileNameFromFileInput (divIdIN,divIdOUT) {
       document.getElementById(divIdIN).label;
        let fullPath = document.getElementById('file-input').value;
        if (fullPath) {
            let startIndex = (fullPath.indexOf('\\') >= 0 ? fullPath.lastIndexOf('\\') : fullPath.lastIndexOf('/'));
            let filename = fullPath.substring(startIndex);
            if (filename.indexOf('\\') === 0 || filename.indexOf('/') === 0) {
                filename = filename.substring(1);
            }
            document.getElementById(divIdOUT).innerHTML = "<b>Layout: " + filename + '</b>';
        }
    }

    function readDSFile(e) {
        let file = e.target.files[0];
        if (!file) {
            return;
        }
        let reader = new FileReader();
        reader.onload = function (e) {
            let contents = e.target.result;
            addDsContents(contents);
        };
        reader.readAsText(file);
        document.getElementById('btnResetDSUpload').setAttribute('class', 'btn btn-danger');
    }

    //File handlers
    document.getElementById('file-input')
        .addEventListener('change', readLangFile, false);
    document.getElementById('ds-file-input')
        .addEventListener('change', readDSFile, false);
    document.getElementById('string-file-input')
        .addEventListener('change', injectStringSource, false);

    //Editor change watcher
    jQuery('#duckyscript').on('input', function () {
       setDirty();
    });

    /**
     Export / Output Helpers
     ------------------------------------
     **/
    function getAllDLs() {
        getPayload();
        getDS();
        hideSuccessDownloadLink();
    }

    function getPayload() {
        byteArrayToFile(finalBufferToByteArray());
        document.getElementById('btnbindl').setAttribute('class','btn btn-outline-primary');
    }

    function getDebugFileOut() {
        //todo prompt for name?
        hideElement('downloaddebugoutput');
        hideElement('btndldebug');
        textToFile(debugLogs.join('\n'), 'DuckyEncodeDebug.txt');
    }

    function getDS() {
        //todo prompt for name?
        textToFile(ds, 'DuckyScript.txt');
        document.getElementById('dsdl').setAttribute('class','btn btn-outline-primary');
    }

    function saveCurrentProgress (stash) {
        if (stash === '' || stash === null || typeof stash === 'undefined'){
            alert("Do you really want an empty file? Write some Ducky Script in the editor and try again.");
            return null;
        }
        textToFile(stash,'DuckyScript_InProgress.txt');
    }

    /**
     Payload STATE Helpers
     ------------------------------------
     **/
    function manageDirtyScriptInGUI() {
        setButtonToGenerate();
        hideSuccessDownloadLink();
        showDirtyAlert();
    }

    function setButtonToGenerate (){
        document.getElementById('duckyencode').setAttribute('class', 'btn btn-outline-warning');
        document.getElementById('duckyencode').innerHTML = 'Generate Payload';
    }

    function setButtonToSuccess () {
        document.getElementById('duckyencode').setAttribute('class', 'btn btn-success');
        document.getElementById('duckyencode').innerHTML = 'SUCCESS';
    }

    function detectAndReactIfDirty (){
        //only care if script has changed, we've encoded and downloaded already otherwise you could just be mashing encode
        if (scriptDirty && scriptHasBeenEncoded){
            manageDirtyScriptInGUI();
        }
    }

    function setDirty (){
        scriptDirty = true;
        detectAndReactIfDirty();
    }

    /**
     ALERT/SHOW/HIDE Helpers
     ------------------------------------
     **/
    function showFailureAlert (failedLine,char) {
        exitCode = 1;
        unhideElement('encodeFailure');
        document.getElementById('specificErrors').innerHTML += "<br>Unrecognized Character: " + char + " on line:" + (parseInt(failedLine)+1);
    }

    function showDirtyAlert (){
        if (scriptHasBeenEncoded && scriptDirty && !suppressDirtyAlertUntilReencode) {
           unhideElement('encodeDirty');
        }
    }

    function showHelp() {
        unhideElement('helpDiv');
        document.getElementById('btnHelp').setAttribute('class', 'btn btn-info disabled');
        $(window).scrollTop(0);
    }

    function hideDirtyAlert () {
        hideElement('encodeDirty');
        suppressDirtyAlertUntilReencode = true;
    }

    function hideSuccessDownloadLink () {
        hideElement('encodeSuccessAlert')
    }

    function hideHelp() {
        hideElement('helpDiv');
        document.getElementById('btnHelp').setAttribute('class', 'btn btn-info');
    }

    function toggleDSUpload() {
        if (document.getElementById('btnUandEDS').getAttribute('class') === 'btn btn-default') {
            unhideElement('uploadDSDiv');
            document.getElementById('btnUandEDS').setAttribute('class', 'btn btn-outline-primary');
        } else {
            hideElement('uploadDSDiv');
            document.getElementById('btnUandEDS').setAttribute('class', 'btn btn-default');
        }
    }

    function toggleChangeKBD() {
        if (document.getElementById('btnUKBD').getAttribute('class') === 'btn btn-default') {
            unhideElement('uploadKBDDiv');
            document.getElementById('btnUKBD').setAttribute('class', 'btn btn-outline-primary');
        } else {
            hideElement('uploadKBDDiv');
            document.getElementById('btnUKBD').setAttribute('class', 'btn btn-default');
        }
    }

    function toggleShowExtraFunctions() {
        if (document.getElementById('btnExtraFunctions').getAttribute('class') === 'btn btn-secondary') {
            unhideElement('extraFunctions');
            document.getElementById('btnExtraFunctions').setAttribute('class', 'btn btn-secondary disabled');
        } else {
            hideElement('extraFunctions');
            document.getElementById('btnExtraFunctions').setAttribute('class', 'btn btn-secondary');
        }
    }

    /**
     RESET Helpers
     ------------------------------------
     **/
    function resetDLs() {
        hideElement('bindl');
        hideElement('downloaddebugoutput');
        finalizedOutputBuffer = [];
        finalizedDS = null;
        setButtonToGenerate();
        hideSuccessDownloadLink();
        scriptHasBeenEncoded = false;
    }

    function resetEditor() {
        document.getElementById('duckyscript').value = null;
        setDirty();
    }

    function resetKBDUpload() {
        kbdLayoutMap = defaultUSKbdLayout;
        document.getElementById('file-content').innerText = null;
        document.getElementById('file-input').value = null;
        document.getElementById('btnResetKBD').setAttribute('class', 'btn btn-outline-danger');
        document.getElementById('currentLang').innerHTML = "<b>Layout: US</b>";
        setDirty();
    }

    function resetDSUpload() {
        document.getElementById('ds-file-content').innerText = null;
        document.getElementById('ds-file-input').value = null;
        document.getElementById('btnResetDSUpload').setAttribute('class', 'btn btn-outline-danger');
    }

    /**
     misc helpers
     ------------------------------------
     **/
    function unhideElement(eId) {
        document.getElementById(eId).setAttribute('class', 'visible');
    }

    function hideElement(eId) {
        document.getElementById(eId).setAttribute('class', 'hidden');
    }

    /**
     Input Helpers
     ------------------------------------
     **/
    function importHelloWorld() {
        document.getElementById('btnHelp').setAttribute('class', 'btn btn-info');
        document.getElementById('duckyscript').value = `DELAY 3000
GUI r
DELAY 500
STRING notepad
DELAY 500
ENTER
DELAY 750
STRING Hello World!!!
ENTER`;
        setDirty();
        hideHelp();
    }

    function injectStringSource(e) {
        let file = e.target.files[0];
        if (!file) {
            return
        }
        let reader = new FileReader();
        reader.onload = function (e) {
            let contents = e.target.result;
            wrapAndInjectStringsFromFile(contents);
            document.getElementById('string-file-content').textContent = contents;
        };
        reader.readAsText(file);
    }

    function wrapAndInjectStringsFromFile(contents) {
        let element = document.getElementById('string-file-content');
        element.textContent = contents;
        let textArea = document.getElementById('duckyscript');
        let inBuff = textArea.value;
        if (inBuff === null || typeof inBuff === 'undefined' || inBuff.trim() === ''){
            inBuff = 'REM ';
        }
        let toAppend = splitDS(sanitizeDS(contents)).map((e) => {
            if(e === "") {
                return 'ENTER';
            } else if(e === '\t') {
                return 'TAB';
            }else if (e === " ") {
                return "SPACE";
            } else if (typeof e === "undefined"){
                return '';
            } else {
                return "STRING "+e;
            }
        });
        let finalized = [];
        for(let l in toAppend){
            finalized.push(toAppend[l]);
            finalized.push("ENTER");
        }
        let a = finalized.join('\n');
        textArea.value = inBuff +"\n" + a;
    }

    function addDsContents(contents) {
        let element = document.getElementById('ds-file-content');
        element.textContent = contents;
        let textArea = document.getElementById('duckyscript');
        textArea.value = contents;
    }

    function displayJSONContents(contents) {
        let element = document.getElementById('file-content');
        element.textContent = contents;
        try {
            kbdLayoutMap = JSON.parse(contents);
            return true;
        }catch (e){
            alert("It looks like this file is not valid JSON, try uploading another.");
            resetKBDUpload();
            return false;
        }
    }

    function splitDS(dS) {
        return dS.split('\n');
    }

    function splitLine(l) {
        return l.split(' ');
    }

    function sanitizeDS(dS) {
        // sanitze CRLF and backwards quotes
        let noR = dS.replace(/\r/g, '');
        return noR.replace(/”/g,'"');
    }

    function trimInput(string) {
        return string.trim();
    }
</script>
</body>
</html>