__int64 __fastcall sub_3E3C60(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // r14
  _QWORD *v8; // rax
  int v9; // ebx
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rdi
  _QWORD *(__fastcall *v13)(__int64, __int64); // rax
  __int64 v14; // [rsp+0h] [rbp-58h] BYREF
  __int64 v15; // [rsp+8h] [rbp-50h]
  _DWORD v16[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD *v17; // [rsp+18h] [rbp-40h]
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v2 = *(_DWORD *)(a2 + 8);
  v18 = __readfsqword(0x28u);
  if ( v2 )
    return sub_3EC640(a1, a2);
  if ( *(char *)(a2 + 16) < 0 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    result = 4294967283LL;
    if ( *(__int64 *)(v4 + 136) <= 31 )
      return result;
    v14 = 0x400000001LL;
    v6 = *(_QWORD *)(v4 + 144);
    v15 = 8;
    v7 = v6 - 32;
    v16[0] = 5;
    v8 = (_QWORD *)j__qalloc_or_throw();
    *v8 = v4;
    v9 = 8;
    v8[1] = v7;
    v17 = v8;
    v16[1] = HIDWORD(v14);
    do
    {
      sub_1CF350(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 784LL) + 56LL),
        4,
        (unsigned __int8 *)&v14,
        nullptr,
        (unsigned __int8 *)v16);
      LODWORD(v15) = v15 + 4;
      v17[1] += 4LL;
      --v9;
    }
    while ( v9 );
    v10 = *(_QWORD *)(a1 + 16);
    v11 = *(_QWORD *)(v10 + 928);
    if ( !v11 )
    {
      v12 = *(_QWORD *)(v10 + 1504);
      v13 = *(_QWORD *(__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 312LL);
      if ( v13 == sub_3E28D0 )
      {
        v11 = operator new(0x168u);
        sub_192DB0(v11, v10);
        *(_QWORD *)v11 = &off_4B8A30;
      }
      else
      {
        v11 = (__int64)v13(v12, *(_QWORD *)(a1 + 16));
      }
      *(_QWORD *)(v10 + 928) = v11;
      v10 = *(_QWORD *)(a1 + 16);
    }
    *(_DWORD *)(v11 + 352) = *(_DWORD *)(v11 + 24) * *(_DWORD *)(*(_QWORD *)(v10 + 1504) + 80LL);
    sub_1166E0((__int64)v16);
    sub_1166E0((__int64)&v14);
  }
  return 0;
}

