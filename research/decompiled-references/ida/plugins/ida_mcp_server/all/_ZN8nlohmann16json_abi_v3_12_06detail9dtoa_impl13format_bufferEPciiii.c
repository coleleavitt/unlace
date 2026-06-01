_BYTE *__fastcall nlohmann::json_abi_v3_12_0::detail::dtoa_impl::format_buffer(
        nlohmann::json_abi_v3_12_0::detail::dtoa_impl *this,
        char *a2,
        int a3,
        int a4,
        int a5)
{
  size_t v5; // r9
  int v7; // ecx
  _BYTE *v8; // rsi
  int v9; // edx
  size_t v11; // r14
  unsigned int v12; // edx
  size_t v13; // [rsp+0h] [rbp-28h]
  int v14; // [rsp+0h] [rbp-28h]
  _BYTE *v15; // [rsp+0h] [rbp-28h]
  size_t v16; // [rsp+0h] [rbp-28h]
  int v17; // [rsp+Ch] [rbp-1Ch]
  int v18; // [rsp+Ch] [rbp-1Ch]

  v5 = (int)a2;
  v7 = v5 + a3;
  if ( (int)v5 <= (int)v5 + a3 && v7 <= a5 )
  {
    v14 = v5 + a3;
    memset((char *)this + (int)v5, 48, a3);
    *(_WORD *)((char *)this + v14) = 12334;
    return (char *)this + v14 + 2;
  }
  if ( v7 > 0 && v7 <= a5 )
  {
    v18 = v5;
    v15 = (char *)this + v7;
    memmove(v15 + 1, v15, -(__int64)a3);
    *v15 = 46;
    return (char *)this + v18 + 1;
  }
  if ( v7 > a4 && v7 <= 0 )
  {
    v16 = v5;
    v11 = -v7;
    memmove((char *)this + v11 + 2, this, v5);
    *(_WORD *)this = 11824;
    memset((char *)this + 2, 48, v11);
    return (char *)this + v16 + v11 + 2;
  }
  v8 = (char *)this + 1;
  if ( (_DWORD)v5 == 1 )
  {
    *v8 = 101;
    v9 = v7 - 1;
    if ( v7 - 1 >= 0 )
      goto LABEL_9;
  }
  else
  {
    v17 = v5 + a3;
    v13 = v5;
    memmove((char *)this + 2, v8, v5 - 1);
    v7 = v17;
    *((_BYTE *)this + 1) = 46;
    v8 = (char *)this + v13 + 1;
    *v8 = 101;
    v9 = v17 - 1;
    if ( v17 - 1 >= 0 )
    {
LABEL_9:
      v8[1] = 43;
      if ( v9 <= 9 )
      {
LABEL_10:
        v8[2] = 48;
        v8[3] = v9 + 48;
        return v8 + 4;
      }
      goto LABEL_11;
    }
  }
  v9 = 1 - v7;
  v8[1] = 45;
  if ( 1 - v7 <= 9 )
    goto LABEL_10;
LABEL_11:
  if ( v9 > 99 )
  {
    v8[2] = v9 / 0x64u + 48;
    v12 = v9 % 0x64u;
    v8[3] = v12 / 0xA + 48;
    v8[4] = v12 % 0xA + 48;
    return v8 + 5;
  }
  else
  {
    v8[2] = v9 / 0xAu + 48;
    v8[3] = v9 % 0xAu + 48;
    return v8 + 4;
  }
}

