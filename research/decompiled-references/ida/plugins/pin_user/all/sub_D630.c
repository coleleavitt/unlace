char __fastcall sub_D630(const char *a1)
{
  char result; // al

  result = is_trusted_idb();
  if ( !result )
    return (unsigned int)sub_CF90(
                           0xFFFFFFFF,
                           (__int64)"TITLE Debugger warning\n"
                                    "ICON WARNING\n"
                                    "AUTOHIDE NONE\n"
                                    "PLEASE READ CAREFULLY - RISK OF UNAUTHORIZED CODE EXECUTION!\n"
                                    "\n"
                                    "IDA is about to launch an application on your request (set in debugger-specific opti"
                                    "ons).\n"
                                    "This application will be executed on this system and may perform any operations.\n"
                                    "Be especially careful if you received the input file and/or the idb file\n"
                                    "from a third party!\n"
                                    "\n"
                                    "Are you sure you want to continue?\n"
                                    "Full commandline to be executed\n"
                                    "%s\n"
                                    "\n"
                                    "NOTE: see also the MAX_TRUSTED_IDB_COUNT parameter in ida.cfg for more info.\n",
                           a1) == 1;
  return result;
}

