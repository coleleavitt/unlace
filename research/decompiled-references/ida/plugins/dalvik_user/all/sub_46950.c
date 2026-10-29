__int64 __fastcall sub_46950(__int64 a1, int a2, __int64 *a3)
{
  int v3; // eax
  unsigned int v5; // edx
  int v6; // r12d
  bool v7; // zf
  __int64 v9; // [rsp+8h] [rbp-30h]
  __int64 v10[5]; // [rsp+10h] [rbp-28h] BYREF

  v3 = *(_DWORD *)(a1 + 24);
  v10[1] = __readfsqword(0x28u);
  v5 = 0;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(unsigned int)(v3 + a2) )
    return v5;
  if ( a2 == 8 )
  {
    if ( !(unsigned __int8)sub_468D0(a1, v10, 0) )
      return 0;
    v9 = v10[0];
    if ( *(_BYTE *)(a1 + 56) )
LABEL_14:
      sub_1FAD0((__int64 *)(a1 + 32));
  }
  else
  {
    if ( a2 != 4 )
    {
      v9 = 0;
      v6 = v3 + a2;
      __memcpy_chk();
      v7 = *(_BYTE *)(a1 + 56) == 0;
      *(_DWORD *)(a1 + 24) = v6;
      if ( !v7 )
        sub_1FAD0((__int64 *)(a1 + 32));
      goto LABEL_6;
    }
    if ( !(unsigned __int8)sub_46430(a1, (unsigned __int32 *)v10, 0) )
      return 0;
    v9 = LODWORD(v10[0]);
    if ( *(_BYTE *)(a1 + 56) )
      goto LABEL_14;
  }
LABEL_6:
  if ( a3 )
    *a3 = v9;
  return 1;
}

