char __fastcall sub_701C0(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4, _QWORD *a5)
{
  __int64 v8; // rdi
  _QWORD *v10; // r15
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  char result; // al
  char v15; // [rsp+Fh] [rbp-99h]
  _QWORD *v16; // [rsp+18h] [rbp-90h] BYREF
  __int64 v17; // [rsp+20h] [rbp-88h] BYREF
  __int64 v18; // [rsp+28h] [rbp-80h]
  __int128 v19; // [rsp+30h] [rbp-78h]
  __int64 v20; // [rsp+40h] [rbp-68h]
  int v21; // [rsp+48h] [rbp-60h]
  __int64 v22; // [rsp+50h] [rbp-58h]
  __int64 v23; // [rsp+58h] [rbp-50h]
  int v24; // [rsp+60h] [rbp-48h]
  unsigned __int64 v25; // [rsp+68h] [rbp-40h]

  v8 = *(_QWORD *)(a1 + 5304);
  v25 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_6F3C0(v8, a2, &v16, 1u) )
    return 0;
  v10 = v16;
  if ( !v16[1] )
    return 0;
  v11 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = *v10 + 12 * v11;
      if ( !*(_DWORD *)(v12 + 4) )
        break;
LABEL_4:
      if ( ++v11 >= v10[1] )
        return 0;
    }
    v13 = *(unsigned int *)(v12 + 8);
    v17 = a1;
    v18 = 0;
    v20 = 0;
    v21 = -1;
    v22 = v13;
    v23 = -1;
    v24 = 0;
    v19 = 0;
    if ( (unsigned __int8)sub_6FFD0((__int64)&v17) )
    {
      result = sub_69000(a3, v22);
      if ( result )
        break;
    }
    if ( !v18 )
      goto LABEL_4;
    *(_QWORD *)&v19 = 0;
    ++v11;
    qfree();
    if ( v11 >= v10[1] )
      return 0;
  }
  if ( a4 )
    *a4 = v23;
  if ( a5 )
    *a5 = v22;
  if ( v18 )
  {
    v15 = result;
    *(_QWORD *)&v19 = 0;
    qfree();
    return v15;
  }
  return result;
}
