__int64 __fastcall sub_12A20(__int64 a1, char a2)
{
  __int64 v2; // rax
  const char *v3; // r8
  char v4; // cl
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  char v9; // r9
  int v10; // [rsp-8h] [rbp-40h]
  __int16 v11; // [rsp+Ch] [rbp-2Ch] BYREF
  __int16 v12; // [rsp+Eh] [rbp-2Ah] BYREF
  __int64 v13; // [rsp+10h] [rbp-28h] BYREF
  __int64 v14; // [rsp+18h] [rbp-20h] BYREF
  _QWORD v15[3]; // [rsp+20h] [rbp-18h] BYREF

  v15[1] = __readfsqword(0x28u);
  if ( !a2 )
    return 3;
  v11 = 2;
  v2 = *(unsigned __int16 *)(a1 + 33085);
  v3 = (const char *)&unk_228D8;
  v12 = 0;
  v13 = v2;
  v14 = *(unsigned __int16 *)(a1 + 33019);
  v15[0] = *(unsigned __int8 *)(a1 + 33088);
  if ( v15[0] == 3 )
    v3 = "/CLDC";
  if ( (unsigned int)sub_E5D0(
                       (__int64)"HELP\n"
                                "Java-VM class file loading options\n"
                                "\n"
                                "Do not create 'import' segment with external-references\n"
                                "\n"
                                "  Prohibits the creation of a segment with external names, classes, and\n"
                                "  methods.\n"
                                "\n"
                                "\n"
                                "Create 'import' segment with with references from commands\n"
                                "\n"
                                "  Only regular references to the import segment will be collected.\n"
                                "  If this option is off, then all references (including simple text\n"
                                "  references) will be collected.\n"
                                "\n"
                                "\n"
                                "Field/variable declarations are included in references\n"
                                "\n"
                                "  Cross references from field declarations are collected in the import\n"
                                "  segment. For example, a field declaration\n"
                                "\n"
                                "    Field borland.ui.AboutDialog about\n"
                                "\n"
                                "  creates a reference to class borland.ui.AboutDialog\n"
                                "\n"
                                "\n"
                                "Method return types are included in references\n"
                                "\n"
                                "  Cross references from the return type and arguments of method\n"
                                "  declarations are collected in the import segment.\n"
                                "  NOTE: The import segment does not contain classes that appear only in\n"
                                "        the arguments of the method declarations.\n"
                                "\n"
                                "Store unknown attributes to external files\n"
                                "\n"
                                "  This option allows to extract non-standard attributes (if present)\n"
                                "  and store them to a set of files in the current directory.\n"
                                "  Filenames will have <classname>.<tagname>.<attributename> form\n"
                                "\n"
                                "\n"
                                "Rename local (slot) variables (if information is available)\n"
                                "\n"
                                "  This option allows to use names from variable declarations to\n"
                                "  rename local variables if the input file has this information.\n"
                                "\n"
                                "\n"
                                "Create visible representation of stripped names\n"
                                "\n"
                                "  Some java classes have their local\n"
                                "  names stripped. This option allows IDA to recreate such local names.\n"
                                "  NOTE: If this option is selected then all one-character names with\n"
                                "        the character code >= 0x80 will be ignored.\n"
                                "\n"
                                "\n"
                                "Continue loading after errors in additional attributes\n"
                                "\n"
                                "  Normally all errors in the classfile structure are fatal.\n"
                                "  If this option is on, errors in the additional attributes\n"
                                "  produce only warnings and the loading process continues.\n"
                                "\n"
                                "ENDHELP\n"
                                "Java loading options\n"
                                "\n"
                                "            Class File version %D.%D (JDK1.%D%A)\n"
                                "\n"
                                "\n"
                                "<~D~o not create 'import' segment with external-references :R>\n"
                                "<~C~reate 'import' segment with references from commands   :R>\n"
                                "<~F~ield/variable declarations are included in references  :R>\n"
                                "<~M~ethod return types are included in references          :R>>\n"
                                "\n"
                                "<~S~tore unknown attributes to external files              :C>\n"
                                "<~R~ename local (slot) variables (if info is available)    :C>\n"
                                "<Create ~v~isible representation of stripped names         :C>\n"
                                "<Continue ~l~oading after errors in additional attributes  :C>>\n"
                                "\n"
                                "\n",
                       &v13,
                       &v14,
                       v15,
                       v3,
                       &v11,
                       &v12) )
  {
    v4 = v11;
    *(_DWORD *)(a1 + 148) &= ~0x20000000u;
    return (8 * (unsigned __int8)v12) | (unsigned int)((1 << v4) - 1);
  }
  else
  {
    qexit(1);
    return sub_12B30(1, v10, v6, v7, v8, v9);
  }
}

