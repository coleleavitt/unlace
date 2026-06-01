__int64 __fastcall sub_1D1D80(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  unsigned __int64 *v4; // rax
  int v5; // eax
  int v6; // eax
  int v7; // [rsp+Ch] [rbp-18Ch]
  char v8; // [rsp+38h] [rbp-160h] BYREF
  unsigned __int64 v9; // [rsp+178h] [rbp-20h] BYREF

  v9 = __readfsqword(0x28u);
  if ( (unsigned int)(*a3 - 56) > 1 )
    return 0;
  v4 = (unsigned __int64 *)&v8;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 5;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *(v4 - 2) = 0;
  }
  while ( &v9 != v4 );
  if ( !(unsigned int)decode_insn() )
    return 0;
  v5 = sub_CFF70();
  if ( v5 <= 1 )
  {
    if ( v5 < 0 )
    {
      if ( v5 != -1 )
        goto LABEL_9;
      return 0;
    }
    if ( v5 )
    {
      v6 = sub_122AF0(a1, v7);
      if ( v6 != -1 )
      {
        *a2 = v6;
        return 1;
      }
    }
    return 0;
  }
  if ( (unsigned int)(v5 - 2) > 1 )
  {
LABEL_9:
    if ( !under_debugger )
      sub_383060(0xCD2Du, 0.0);
    BUG();
  }
  return 2;
}

