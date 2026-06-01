unsigned __int8 __fastcall sub_7D6C0(__int64 *a1, __int64 a2)
{
  unsigned __int8 result; // al
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(__int64 *, char); // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rsi
  char v10; // al
  void (__fastcall *v11)(__int64 *, const char *, __int64); // rcx
  __int64 (__fastcall *v12)(__int64 *, char); // rax
  __int64 v13; // rbp
  unsigned __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax

  if ( (*(_BYTE *)(a2 + 1) & 0xFB) != 1 )
  {
    result = *(_BYTE *)(a2 + 1) - 3;
    if ( result > 1u )
      return result;
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 123);
    v3 = sub_20D00((__int64)(a1 + 28));
    v4 = *a1;
    switch ( v3 )
    {
      case 1LL:
        (*(void (__fastcall **)(__int64 *, const char *, __int64))(v4 + 56))(a1, "1to2", 32);
        break;
      case 2LL:
        (*(void (__fastcall **)(__int64 *, const char *, __int64))(v4 + 56))(a1, "1to4", 32);
        break;
      case 3LL:
        (*(void (__fastcall **)(__int64 *, const char *, __int64))(v4 + 56))(a1, "1to8", 32);
        break;
      case 4LL:
        (*(void (__fastcall **)(__int64 *, const char *, __int64))(v4 + 56))(a1, "1to16", 32);
        break;
      case 5LL:
        (*(void (__fastcall **)(__int64 *, const char *, __int64))(v4 + 56))(a1, "1to32", 32);
        break;
      default:
        return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 125);
    }
    return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 125);
  }
  if ( sub_20E00(*((unsigned __int16 *)a1 + 124)) )
  {
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
    v5 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
    if ( v5 == sub_7D640 )
    {
      v6 = a1[4];
      if ( v6 )
      {
        v7 = v6 + 1;
        v8 = a1[4];
        --v6;
      }
      else
      {
        v8 = 1;
        v7 = 2;
      }
      v9 = a1[3];
      if ( a1[5] < v7 )
      {
        v17 = qvector_reserve();
        a1[3] = v17;
        v9 = v17;
      }
      a1[4] = v7;
      *(_BYTE *)(v9 + v6) = 32;
      *(_BYTE *)(a1[3] + v8) = 0;
    }
    else
    {
      v5(a1, 32);
    }
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 123);
    v10 = (*((_BYTE *)a1 + 257) >> 7) | *((_BYTE *)a1 + 497) & 2;
    v11 = *(void (__fastcall **)(__int64 *, const char *, __int64))(*a1 + 56);
    switch ( v10 )
    {
      case 2:
        v11(a1, "ru-sae", 32);
        break;
      case 3:
        v11(a1, "rz-sae", 32);
        break;
      case 1:
        v11(a1, "rd-sae", 32);
        break;
      default:
        v11(a1, "rn-sae", 32);
        break;
    }
    return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 125);
  }
  result = sub_20F10(*((unsigned __int16 *)a1 + 124));
  if ( result )
  {
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
    v12 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
    if ( v12 == sub_7D640 )
    {
      v13 = a1[4];
      if ( v13 )
      {
        v14 = v13 + 1;
        v15 = a1[4];
        --v13;
      }
      else
      {
        v15 = 1;
        v14 = 2;
      }
      v16 = a1[3];
      if ( a1[5] < v14 )
      {
        v18 = qvector_reserve();
        a1[3] = v18;
        v16 = v18;
      }
      a1[4] = v14;
      *(_BYTE *)(v16 + v13) = 32;
      *(_BYTE *)(a1[3] + v15) = 0;
    }
    else
    {
      v12(a1, 32);
    }
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 123);
    (*(void (__fastcall **)(__int64 *, char *, __int64))(*a1 + 56))(a1, "sae", 32);
    return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 125);
  }
  return result;
}
