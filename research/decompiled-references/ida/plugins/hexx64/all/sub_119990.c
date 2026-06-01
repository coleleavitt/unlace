int *__fastcall sub_119990(__int64 a1, unsigned __int64 a2, const __m128i *a3, __int64 a4, int *a5, __int64 a6)
{
  int v8; // eax
  int *v10; // r15
  __int64 v12; // rbp
  int *v13; // rbx
  _DWORD *v14; // rcx
  int *v15; // rdx
  _DWORD *v16; // rax
  _DWORD *v17; // rax
  _QWORD v18[9]; // [rsp+10h] [rbp-48h] BYREF

  v8 = *a5;
  v18[1] = __readfsqword(0x28u);
  if ( v8 == 12 )
  {
    v10 = a5 + 8;
    v12 = a6 + 1;
    v13 = a5 + 12;
    if ( sub_119140(a2, a3, a4, (__int64)(a5 + 12), (__int64)(a5 + 8), a6 + 1) )
      return v10;
    if ( sub_119140(a2, a3, a4, (__int64)v10, (__int64)v13, v12) )
      return v13;
    return nullptr;
  }
  if ( v8 != 13 )
    return nullptr;
  if ( a6 != 1 )
    return nullptr;
  v18[0] = a4;
  v14 = sub_30D610(a1, (__int64)a3, v18, (unsigned __int8 *)a5 + 48);
  if ( !v14 )
    return nullptr;
  v10 = a5 + 8;
  v15 = a5 + 8;
  if ( *((_BYTE *)a5 + 32) == 4 )
  {
    v17 = *((_DWORD **)a5 + 5);
    if ( *v17 == 8 )
      v15 = v17 + 8;
  }
  if ( *(_BYTE *)v14 == 4 )
  {
    v16 = *((_DWORD **)v14 + 1);
    if ( *v16 == 8 )
      v14 = v16 + 8;
  }
  if ( !(unsigned __int8)sub_152EE0(a1, a2, (__int64)v15, (__int64)v14, *((_QWORD *)a5 + 3), a3, a4) )
    return nullptr;
  return v10;
}

