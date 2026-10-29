int __fastcall sub_CD90(__int64 a1, unsigned __int64 a2, __int64 a3, const char *a4)
{
  int result; // eax
  __int64 v6; // rdx
  __int64 eah; // r13
  __int64 v8; // rax
  __int64 v9; // rbp
  unsigned __int8 v10; // bl
  _BYTE v11[248]; // [rsp+10h] [rbp-128h] BYREF
  unsigned __int64 v12; // [rsp+108h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  result = strcmp(a4, "Microsoft.Net assembly");
  if ( result )
  {
    if ( a1 != -1 || a3 )
    {
      gen_fix_fixups();
      return 1;
    }
    else
    {
      netnode_check();
      v6 = netnode_valobj();
      result = 0;
      if ( v6 > 0 )
      {
        eah = get_eah();
        v8 = netnode_altval();
        v9 = *(_QWORD *)(eah + 16) & (a2 + v8);
        qword_379D8 = v8;
        v10 = sub_B700((__int64)v11, eah, v9, a2, 1);
        netnode_supset();
        return v10;
      }
    }
  }
  return result;
}

