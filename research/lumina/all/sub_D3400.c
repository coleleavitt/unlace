__int64 __fastcall sub_D3400(__int64 a1, int a2, __int64 a3, _DWORD *a4, _DWORD *a5)
{
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned __int32 v13; // ebp
  unsigned __int32 v14; // edx
  unsigned __int32 v15; // [rsp+8h] [rbp-40h] BYREF
  unsigned int v16; // [rsp+Ch] [rbp-3Ch] BYREF
  _QWORD v17[7]; // [rsp+10h] [rbp-38h] BYREF

  v8 = *(_QWORD *)(a1 + 96);
  v9 = *(unsigned int *)(a1 + 184);
  v17[1] = __readfsqword(0x28u);
  if ( v8 )
  {
    v8 = v9 * ((v8 - 1) / v9 + 1);
    v9 += v8;
  }
  *(_QWORD *)(a1 + 96) = v8;
  if ( a3 < v9 )
    return 101;
  if ( a2 || *(_QWORD *)(a1 + 104) != v8 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, __int64))(**(_QWORD **)(a1 + 80) + 16LL))(
               *(_QWORD *)(a1 + 80),
               v17,
               8,
               v8);
    if ( (_DWORD)result )
      return result;
    if ( v17[0] != 0xD763A120F905D5D9LL )
      return 101;
  }
  result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, __int64, __int64))(**(_QWORD **)(a1 + 80) + 16LL))(
             *(_QWORD *)(a1 + 80),
             &v16,
             4,
             v8 + 8);
  if ( !(_DWORD)result )
  {
    *a4 = _byteswap_ulong(v16);
    result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, __int64, __int64))(**(_QWORD **)(a1 + 80) + 16LL))(
               *(_QWORD *)(a1 + 80),
               &v16,
               4,
               v8 + 12);
    if ( !(_DWORD)result )
    {
      v11 = *(_QWORD *)(a1 + 80);
      *(_DWORD *)(a1 + 56) = _byteswap_ulong(v16);
      result = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64, __int64))(*(_QWORD *)v11 + 16LL))(
                 v11,
                 &v16,
                 4,
                 v8 + 16);
      if ( !(_DWORD)result )
      {
        *a5 = _byteswap_ulong(v16);
        v12 = *(_QWORD *)(a1 + 96);
        if ( v12 )
        {
LABEL_21:
          *(_QWORD *)(a1 + 96) = *(unsigned int *)(a1 + 184) + v12;
          return result;
        }
        result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, __int64, __int64))(**(_QWORD **)(a1 + 80) + 16LL))(
                   *(_QWORD *)(a1 + 80),
                   &v16,
                   4,
                   v8 + 20);
        if ( !(_DWORD)result )
        {
          v13 = _byteswap_ulong(v16);
          result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, __int64, __int64))(**(_QWORD **)(a1 + 80) + 16LL))(
                     *(_QWORD *)(a1 + 80),
                     &v16,
                     4,
                     v8 + 24);
          if ( !(_DWORD)result )
          {
            v14 = _byteswap_ulong(v16);
            v15 = v14;
            if ( !v14 )
            {
              v14 = *(_QWORD *)(a1 + 200);
              v15 = v14;
            }
            if ( v13 - 32 <= 0xFFE0 && v14 - 512 <= 0xFE00 )
            {
              result = 101;
              if ( (v14 & (v14 - 1)) == 0 && (v13 & (v13 - 1)) == 0 )
              {
                result = sub_D2EC0(a1, (__int64)&v15, -1);
                v12 = *(_QWORD *)(a1 + 96);
                *(_DWORD *)(a1 + 184) = v13;
                goto LABEL_21;
              }
              return result;
            }
            return 101;
          }
        }
      }
    }
  }
  return result;
}
