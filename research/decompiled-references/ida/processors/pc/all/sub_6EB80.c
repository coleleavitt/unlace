__int64 __fastcall sub_6EB80(__int128 a1, char a2)
{
  __int64 v3; // rax
  int v4; // r12d
  __int64 v5; // rbx
  __int64 func; // rax
  __int64 v7; // rcx
  char v8; // r8
  __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned int v12; // eax
  __int64 result; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // r14
  _BYTE v16[9]; // [rsp+7h] [rbp-61h] BYREF
  __int64 v17; // [rsp+10h] [rbp-58h] BYREF
  __int64 v18; // [rsp+18h] [rbp-50h] BYREF
  __int64 v19[9]; // [rsp+20h] [rbp-48h] BYREF

  v19[1] = __readfsqword(0x28u);
  sub_6E740((_QWORD *)a1, *((unsigned __int64 **)&a1 + 1), 0);
  v3 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 16LL);
  if ( (v3 & 0x22) == 0 )
  {
    v15 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL);
    if ( **((_QWORD **)&a1 + 1) < v15 )
    {
      do
      {
        if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 && sub_68F20() )
        {
          *(_QWORD *)(*((_QWORD *)&a1 + 1) + 16LL) |= 2uLL;
          update_func();
          v3 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 16LL);
          goto LABEL_2;
        }
      }
      while ( next_head() < v15 );
      v3 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 16LL);
    }
  }
LABEL_2:
  v16[8] = 0;
  v4 = a2 & 1;
  v17 = -1;
  v18 = 0;
  *(_QWORD *)v16 = (v3 & 0x10) != 0;
  v19[0] = 0;
  if ( (v3 & 0x4000) != 0 )
  {
    v17 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 48LL);
    v5 = sub_31500(a1, v16, &v16[1], &v18, v19, 0, 0, v4);
    func = get_func();
    v7 = v17;
    v8 = 0;
    v9 = func;
  }
  else
  {
    v5 = sub_31500(a1, v16, &v16[1], &v18, v19, &v17, 0, v4);
    v14 = get_func();
    v7 = v17;
    v9 = v14;
    if ( v17 == -1 )
    {
      v17 = 0;
      v7 = 0;
      v8 = 0;
    }
    else
    {
      *(_QWORD *)(v14 + 16) |= 0x4000uLL;
      v8 = 1;
    }
  }
  v10 = v19[0] + v5;
  v11 = v10;
  if ( v4 && v10 < *(_QWORD *)(v9 + 32) )
    v11 = *(_QWORD *)(v9 + 32);
  if ( v7 | v11 || v18 | *(_QWORD *)(v9 + 16) & 0x4000LL )
  {
    if ( !v16[0] )
    {
      v12 = *(_DWORD *)(v9 + 16) & 0xFFFFFFEF;
      goto LABEL_11;
    }
  }
  else if ( !v16[0] )
  {
    if ( v8 )
      update_func();
    return 0;
  }
  v12 = *(_DWORD *)(v9 + 16) | 0x10;
LABEL_11:
  *(_DWORD *)(v9 + 16) = v12;
  result = set_frame_size();
  if ( !(_BYTE)result )
    return 0;
  if ( *(_QWORD *)(v9 + 56) != *(_QWORD *)&v16[1] )
    return update_fpd();
  return result;
}
