__int64 __fastcall sub_D7330(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  __int64 v4; // r12
  unsigned int v5; // ebx
  int i; // eax
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  _DWORD *v13; // rdi
  int v14; // ebx
  unsigned __int32 v15; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 8);
  v16 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(v2 + 96);
  v5 = *(_DWORD *)(v2 + 56);
  for ( i = *(_DWORD *)(v2 + 200) - 200; i > 0; v5 += *(unsigned __int8 *)(v3 + v7) )
  {
    v7 = i;
    i -= 200;
  }
  *(_WORD *)(a1 + 52) |= 8u;
  v8 = *(_QWORD *)(v2 + 80);
  v15 = _byteswap_ulong(*(_DWORD *)(a1 + 48));
  result = (*(__int64 (__fastcall **)(__int64, unsigned __int32 *, __int64, __int64))(*(_QWORD *)v8 + 24LL))(
             v8,
             &v15,
             4,
             v4);
  if ( !(_DWORD)result )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(v2 + 80) + 24LL))(
               *(_QWORD *)(v2 + 80),
               v3,
               *(unsigned int *)(v2 + 200),
               v4 + 4);
    if ( !(_DWORD)result )
    {
      v10 = *(_QWORD *)(v2 + 80);
      v11 = *(_QWORD *)(v2 + 200);
      v15 = _byteswap_ulong(v5);
      result = (*(__int64 (__fastcall **)(__int64, unsigned __int32 *, __int64, __int64))(*(_QWORD *)v10 + 24LL))(
                 v10,
                 &v15,
                 4,
                 v4 + v11 + 4);
      if ( !(_DWORD)result )
      {
        v12 = *(_QWORD *)(v2 + 96) + *(_QWORD *)(v2 + 200);
        ++*(_DWORD *)(v2 + 52);
        v13 = *(_DWORD **)(v2 + 64);
        *(_QWORD *)(v2 + 96) = v12 + 8;
        v14 = sub_D6EC0(v13, *(unsigned int *)(a1 + 48));
        return v14 | (unsigned int)sub_D7110((_QWORD *)(v2 + 120), (int *)(v2 + 128), *(_DWORD *)(a1 + 48));
      }
    }
  }
  return result;
}
