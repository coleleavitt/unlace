__int64 __fastcall sub_1DEC0(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v2)(); // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 ph; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r12
  int v14; // ebp
  __int64 v15; // rdx
  __int64 (__fastcall **v17)(); // [rsp+0h] [rbp-58h] BYREF
  __int128 v18; // [rsp+8h] [rbp-50h]
  __int64 v19; // [rsp+18h] [rbp-40h]
  int v20; // [rsp+20h] [rbp-38h]
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v2 = *(__int64 (__fastcall ****)())(a2 + 32);
  v21 = __readfsqword(0x28u);
  v4 = 2;
  if ( (get_tinfo_property(v2, 2) & 0x3F) != 1 )
  {
    v4 = a2 + 40;
    v2 = &v17;
    v18 = 0;
    v17 = &off_27B80;
    if ( !(unsigned __int8)sub_1D9D0(
                             (__int64 (__fastcall ***)(_QWORD, __m128 *))&v17,
                             (_DWORD *)(a2 + 40),
                             (_QWORD *)(a2 + 32)) )
      return 0;
  }
  v17 = &off_27B98;
  v18 = 0;
  if ( *(_DWORD *)(get_ph(v2, v4, v5) + 4) )
  {
    ph = get_ph(v2, v4, v6);
    v8 = 0;
    if ( *(_DWORD *)(ph + 4) == 13 )
      v8 = sub_1EAF0();
  }
  else
  {
    v8 = sub_1E700();
  }
  v19 = v8;
  v9 = *(unsigned int *)(get_ph(v2, v4, ph) + 4);
  if ( (_DWORD)v9 )
  {
    v11 = get_ph(v2, v4, v9);
    v10 = 0;
    if ( *(_DWORD *)(v11 + 4) == 13 )
      v10 = sub_1EA00();
  }
  else
  {
    v10 = sub_1E540();
  }
  v20 = v10;
  v12 = *(_QWORD *)a2;
  v13 = *(_QWORD *)a2 + 80LL * *(_QWORD *)(a2 + 8);
  if ( v13 != *(_QWORD *)a2 )
  {
    do
    {
      while ( (*(_BYTE *)(v12 + 72) & 2) != 0 )
      {
        if ( *(_DWORD *)(get_ph(v2, v4, v11) + 4) )
        {
          if ( *(_DWORD *)(get_ph(v2, v4, v15) + 4) != 13 )
            return 0;
          v14 = sub_1E7E0();
          if ( v14 == -1 )
            return 0;
        }
        else
        {
          v14 = sub_1E130();
          if ( v14 == -1 )
            return 0;
        }
        if ( v14 == -2 )
          break;
        v2 = (__int64 (__fastcall ***)())v12;
        v12 += 80;
        cleanup_argloc(v2);
        *(_DWORD *)(v12 - 80) = 3;
        *(_DWORD *)(v12 - 72) = v14;
        if ( v13 == v12 )
          goto LABEL_21;
      }
      v4 = v12;
      v2 = &v17;
      if ( !(unsigned __int8)sub_1D9D0(
                               (__int64 (__fastcall ***)(_QWORD, __m128 *))&v17,
                               (_DWORD *)v12,
                               (_QWORD *)(v12 + 64)) )
        return 0;
      v12 += 80;
    }
    while ( v13 != v12 );
  }
LABEL_21:
  *(_QWORD *)(a2 + 56) = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  return 1;
}
