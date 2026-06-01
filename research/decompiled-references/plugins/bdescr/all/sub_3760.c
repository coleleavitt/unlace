__int64 __fastcall sub_3760(_WORD *a1, unsigned __int64 a2, double a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // r12
  bool v6; // bp
  _BOOL4 v7; // ebx
  const char *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rbx
  char v13; // al
  __int64 v14; // rdi
  __int64 v15[5]; // [rsp+0h] [rbp-28h] BYREF

  v15[1] = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 > 6 )
    {
      sub_2D10((__int64)"Plugin's argument (%d) is not valid");
      return 1;
    }
    if ( a2 <= 2 )
    {
      LODWORD(v3) = a2 - 1;
      a1[52] = a2 - 1;
      v15[0] = -1;
      if ( sub_32B0(0xBC1u, v15) <= 0 )
        goto LABEL_10;
      goto LABEL_5;
    }
    v3 = a2 + 1;
    if ( a2 != 6 )
    {
      a1[52] = v3;
      goto LABEL_14;
    }
    v3 = (unsigned __int16)a1[52];
    a1[52] = v3;
    if ( v3 == 2 )
    {
LABEL_9:
      a1[52] = 0;
      v15[0] = -1;
      if ( sub_32B0(0xBC1u, v15) <= 0 )
        goto LABEL_10;
      v8 = "HIDECANCEL\nAre you sure?";
      a1[52] = 0;
      if ( (int)sub_31D0() <= 0 )
        return 1;
      goto LABEL_19;
    }
  }
  else
  {
    if ( !(unsigned int)sub_3100(
                          (__int64)"startitem 2\n"
                                   "HELP\n"
                                   "%s\n"
                                   "ENDHELP\n"
                                   "Create/delete/view Borland's RTTI descriptors\n"
                                   "\n"
                                   "Action:                                  RTTI type:\n"
                                   "<~L~ist RTTI descriptors         :R>       <Incl~u~de C++       :r>\n"
                                   "<L~i~st RTTI problems            :R>       <Include Pa~s~cal    :r>\n"
                                   "<Delete list of descriptors      :R>     <Include ~b~oth      :r>>\n"
                                   "<Delete list of problems         :R>\n"
                                   "<Create ~C~++ descriptor         :R>   \n"
                                   "<Create ~P~ascal descriptor      :R>      <Create ~r~ecursively :C>> \n"
                                   "<Cre~a~te Pascal or C++ descriptor :R>> \n"
                                   "\n",
                          "Borland RTTI descriptors\n"
                          "\n"
                          "This plugin allows you to create/delete/view Borland RTTI descriptors.\n"
                          "These descriptors appear in programs written on BCC++ or Borland Builder\n"
                          "or Borland Delphi.\n"
                          "\n"
                          "When it is called in a normal way it displays a dialog box with\n"
                          "the following fields:\n"
                          "\n"
                          "List RTTI descriptors\n"
                          "\n"
                          "        Displays the list of recognized RTTI descriptors.\n"
                          "        IDA automatically recognizes most descriptors.\n"
                          "        The list will include only the descriptors specified\n"
                          "        by the 'RTTI type' radiobuttons.\n"
                          "        You can also delete any descriptor from list.\n"
                          "\n"
                          "List RTTI problems\n"
                          "\n"
                          "        Displays the list of problematic RTTI descriptors.\n"
                          "        The list will include only the descriptors specified\n"
                          "        by the 'RTTI type' radiobuttons.\n"
                          "        You can also delete any descriptor from list.\n"
                          "\n"
                          "Delete list of descriptors\n"
                          "\n"
                          "        Delete the whole list of RTTI descriptors.\n"
                          "\n"
                          "Delete list of problems\n"
                          "\n"
                          "        Delete the whole list of problematic RTTI descriptors.\n"
                          "\n"
                          "Create C++ descriptor\n"
                          "\n"
                          "        Manually invoke creation of a C++ descriptor at the current\n"
                          "        cursor location.\n"
                          "\n"
                          "Create Pascal descriptor\n"
                          "        Manually invoke creation of a Pascal descriptor at the current\n"
                          "        cursor location.\n"
                          "\n"
                          "Create Pascal or C++ descriptor\n"
                          "\n"
                          "        Manually invoke creation of a Pascal or C++ descriptor at the current\n"
                          "        cursor location. This action tries to create a Pascal descriptor.\n"
                          "        If it fails, then it tries to create a C++ descriptor.\n"
                          "\n"
                          "\n"
                          "RTTI type radiobutton group\n"
                          "\n"
                          "        Controls which descriptors will appear in the displayed lists.\n"
                          "\n"
                          "\n"
                          "Create recursive\n"
                          "\n"
                          "        If this option is set, then IDA tries to create descriptors\n"
                          "        recursively: if a created descriptor refers to another unknown\n"
                          "        descriptor, then it will be created and so on.\n"
                          "\n"
                          "\n"
                          "This plugin may be also called with a parameter in PLUGINS.CFG file.\n"
                          "The following parameters are supported:\n"
                          "\n"
                          "        1        List RTTI descriptors\n"
                          "        2        List RTTI problems\n"
                          "        3        Create C++ RTTI\n"
                          "        4        Create Pascal RTTI\n"
                          "        5        Create RTTI\n"
                          "        6        Repeat RTTI command\n"
                          "\n") )
      return 1;
    v3 = (unsigned __int16)a1[52];
    a1[52] = v3;
    if ( v3 == 2 )
      goto LABEL_9;
  }
  if ( v3 > 3 )
  {
LABEL_14:
    callui(11, v15, &callui);
    v5 = v15[0];
    v6 = v3 != 4;
    v7 = a1[53] != 0;
    if ( sub_32B0(0xBC3u, v15[0], v6, a1[53] != 0) <= 0 && v6 && sub_32B0(0xBC3u, v5, 0, v7) <= 0 )
      sub_3030((__int64)"%a: can't create RTTI descriptor\n", a3);
    return 1;
  }
  v15[0] = -1;
  if ( sub_32B0(0xBC1u, v15) <= 0 )
    goto LABEL_10;
  if ( v3 != 3 )
  {
LABEL_5:
    if ( (unsigned __int8)sub_3400(v15[0], (unsigned int)v3, (unsigned __int16)a1[54]) )
      return 1;
LABEL_10:
    a1[52] = 0;
    return 1;
  }
  a1[52] = 0;
  if ( (int)sub_31D0() > 0 )
  {
    callui(25, "HIDECANCEL\nAre you sure?", v9);
    v10 = 66;
    v12 = netnode_supfirst(v15[0], 66);
    if ( v12 == -1 )
    {
LABEL_33:
      v14 = v15[0];
    }
    else
    {
      while ( 1 )
      {
        v13 = callui(27, v10, v11);
        v14 = v15[0];
        if ( v13 )
          break;
        if ( (netnode_charval(v15[0], v12, 66) & 0xA) == 0 )
          netnode_supdel(v15[0], v12, 66);
        v10 = v12;
        v12 = netnode_supnext(v15[0], v12, 66);
        if ( v12 == -1 )
          goto LABEL_33;
      }
    }
    v8 = (_BYTE *)(&dword_40 + 2);
    if ( netnode_supfirst(v14, 66) == -1 )
LABEL_19:
      sub_32B0(0xBC2u, v8);
  }
  return 1;
}
