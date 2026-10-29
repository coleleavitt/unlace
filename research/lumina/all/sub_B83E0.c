__int64 __fastcall sub_B83E0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  int v6; // ecx
  __int64 *v7; // r12
  __int64 result; // rax
  __int64 (__fastcall *v9)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r10
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  char v13; // al
  char v14; // cl
  int v15; // ecx
  __int64 v16; // rdx
  size_t v17; // rax
  size_t v18; // rbx
  size_t v19; // r13
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  __int16 v24; // ax
  __int16 v25; // cx
  void *v26; // rdi
  size_t v27; // r13
  __int64 v28; // rax

  v6 = *(_DWORD *)(a1 + 16);
  if ( (_DWORD)a3 != (v6 & 0xF) )
    return 2;
  if ( (v6 & 0x40000) != 0 )
  {
    if ( !a5 )
      return 1;
    v7 = (__int64 *)(a5 + *(_QWORD *)(a1 + 8));
  }
  else
  {
    v7 = *(__int64 **)(a1 + 8);
  }
  switch ( a3 )
  {
    case 1LL:
      if ( (v6 & 0x1000000) != 0 )
      {
        if ( a4 && (v17 = strlen((const char *)a4), (v18 = v17) != 0) )
        {
          v26 = (void *)*v7;
          v27 = v17 + 1;
          if ( v7[2] < v17 + 1 )
          {
            v28 = sub_1987B0(v7, *v7, v17 + 1, 1);
            *v7 = v28;
            v26 = (void *)v28;
          }
          v7[1] = v27;
          memmove(v26, a4, v18);
          *(_BYTE *)(*v7 + v18) = 0;
          return 0;
        }
        else
        {
          v7[1] = 0;
          return 0;
        }
      }
      else
      {
        v19 = *(_QWORD *)(a1 + 24);
        if ( strlen((const char *)a4) >= v19 )
          sub_B81F0(a2, (__int64)"String '%s' is too long, truncated to %zu characters\n", (const char *)a4, v19);
        sub_1998A0(v7, a4, v19);
        return 0;
      }
    case 2LL:
      v15 = v6 & 0x3000000;
      v16 = *a4;
      if ( v15 == 0x1000000 )
      {
        *(_BYTE *)v7 = v16;
        return 0;
      }
      else if ( v15 == 0x2000000 )
      {
        *(_WORD *)v7 = v16;
        return 0;
      }
      else
      {
        result = 2;
        if ( !v15 )
        {
          *(_DWORD *)v7 = v16;
          return 0;
        }
      }
      return result;
    case 3LL:
      v10 = v6 & 0xF000000;
      v11 = *(_DWORD *)a4;
      if ( v10 == 0x2000000 )
      {
        v23 = *(_DWORD *)(a1 + 24);
        v24 = *(_WORD *)v7 | v23;
        v25 = *(_WORD *)v7 & ~(_WORD)v23;
        if ( !v11 )
          v24 = v25;
        *(_WORD *)v7 = v24;
        result = 0;
      }
      else if ( v10 > 0x2000000 )
      {
        if ( v10 != 50331648 )
          return 2;
        *(_BYTE *)v7 = v11 != 0;
        result = 0;
      }
      else if ( v10 )
      {
        v12 = *(_DWORD *)(a1 + 24);
        v13 = *(_BYTE *)v7 | v12;
        v14 = *(_BYTE *)v7 & ~(_BYTE)v12;
        if ( !v11 )
          v13 = v14;
        *(_BYTE *)v7 = v13;
        result = 0;
      }
      else
      {
        v20 = *(_DWORD *)(a1 + 24);
        v21 = *(_DWORD *)v7 | v20;
        v22 = *(_DWORD *)v7 & ~v20;
        if ( !v11 )
          v21 = v22;
        *(_DWORD *)v7 = v21;
        result = 0;
      }
      break;
    case 5LL:
      *v7 = *a4;
      return 0;
    case 6LL:
      v9 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(a1 + 8);
      if ( (v6 & 0x40000) != 0 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD *, _QWORD *, _QWORD, _QWORD, __int64))v9)(
                 *a4,
                 a4 + 1,
                 a4 + 9,
                 *(_QWORD *)(a1 + 24),
                 *(_QWORD *)(a1 + 32),
                 a5);
      if ( (v6 & 0x1000000) != 0 )
        return v9(*a4, a4 + 1, a4 + 9, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
      return ((__int64 (__fastcall *)(_QWORD, _QWORD *, _QWORD *))v9)(*a4, a4 + 1, a4 + 9);
    case 7LL:
      sub_189F30(v7, a4);
      return 0;
    default:
      return 2;
  }
  return result;
}
