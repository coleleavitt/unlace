__int64 __fastcall sub_21010(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // r12
  unsigned int _32bit; // eax
  __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // r13
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v16; // [rsp+0h] [rbp-C8h]
  __int64 *v17; // [rsp+8h] [rbp-C0h]
  __int64 v18; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v19; // [rsp+18h] [rbp-B0h]
  int v20; // [rsp+28h] [rbp-A0h]
  __int64 v21; // [rsp+30h] [rbp-98h]
  __int64 v22; // [rsp+38h] [rbp-90h]
  __int128 v23; // [rsp+40h] [rbp-88h]
  __int64 v24; // [rsp+50h] [rbp-78h]
  __int128 v25; // [rsp+58h] [rbp-70h]
  __int64 v26; // [rsp+68h] [rbp-60h]
  __int128 v27; // [rsp+70h] [rbp-58h]
  unsigned __int64 v28; // [rsp+88h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 16);
  v28 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
  {
    create_data();
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 312LL))(
      *(_QWORD *)(a1 + 8),
      a2,
      a3,
      a4);
    v4 = *(_QWORD *)(a1 + 16);
  }
  v17 = *(__int64 **)(a1 + 8);
  v5 = v17[26];
  v6 = a2 + v17[25];
  _32bit = get_32bit();
  v8 = v17[1];
  v9 = *(_DWORD *)(v8 + 2208);
  if ( !v9 || v9 >= _32bit )
  {
    v10 = 0;
    v16 = _32bit;
    if ( !_32bit )
      return 0;
    while ( 1 )
    {
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v24 = 0;
      v26 = 0;
      v19 = 0;
      v23 = 0;
      v25 = 0;
      v27 = 0;
      v12 = *(_QWORD *)(v4 + 8);
      v18 = 0;
      if ( (v12 & 2) != 0 )
      {
        sub_15A30(v17, (__int64)&v18, v6);
        if ( (*(_QWORD *)(v4 + 8) & 4) == 0 )
          goto LABEL_8;
      }
      else if ( (v12 & 4) == 0 )
      {
        goto LABEL_8;
      }
      sub_208D0(v17, (__int64)&v18, v6, *(_QWORD *)(v4 + 16));
LABEL_8:
      v11 = (**(__int64 (__fastcall ***)(__int64, __int64, __int64 *))v4)(v4, v6, &v18);
      if ( v26 )
      {
        *(_QWORD *)&v27 = 0;
        qfree();
      }
      if ( v24 )
      {
        *(_QWORD *)&v25 = 0;
        qfree();
      }
      if ( v22 )
      {
        *(_QWORD *)&v23 = 0;
        qfree();
      }
      clear_tinfo_t();
      if ( v18 )
      {
        *(_QWORD *)&v19 = 0;
        qfree();
      }
      if ( v11 )
        return v11;
      ++v10;
      v6 += v5;
      if ( v16 == v10 )
        return 0;
    }
  }
  if ( *(_BYTE *)(v8 + 2216) )
    sub_EC40();
  return (unsigned int)-1;
}
