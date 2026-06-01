__int64 __fastcall sub_4D00(__int64 a1, _QWORD *a2, unsigned __int8 a3)
{
  __int64 v4; // r12
  __int64 v6; // rax
  int v8; // r12d
  __int64 v9; // r15
  __int64 (__fastcall *v10)(_QWORD *, char); // rax
  __int64 v11; // rbp
  unsigned __int64 v12; // r13
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(_QWORD *, char); // rax
  __int64 v15; // rbp
  unsigned __int64 v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+18h] [rbp-40h]

  v4 = a2[2];
  v21 = __readfsqword(0x28u);
  v6 = getseg();
  if ( !v6 || *(_BYTE *)(v6 + 184) != 12 )
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a2 + 344LL))(a2, a3);
  if ( get_ea_name() > 0 )
  {
    v8 = v4 - get_segm_base();
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 168LL);
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a2 + 56LL))(a2, 0, 7);
    v10 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
    if ( v10 == sub_45C0 )
    {
      v11 = a2[4];
      v12 = 2;
      if ( v11 )
        v12 = v11-- + 1;
      v13 = a2[3];
      if ( a2[5] < v12 )
      {
        v19 = qvector_reserve();
        a2[3] = v19;
        v13 = v19;
      }
      a2[4] = v12;
      *(_BYTE *)(v13 + v11) = 32;
      *(_BYTE *)(a2[3] + v11 + 1) = 0;
    }
    else
    {
      v10(a2, 32);
    }
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a2 + 56LL))(a2, v9, 32);
    v14 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
    if ( v14 == sub_45C0 )
    {
      v15 = a2[4];
      v16 = 2;
      if ( v15 )
        v16 = v15-- + 1;
      v17 = a2[3];
      if ( a2[5] < v16 )
      {
        v20 = qvector_reserve();
        a2[3] = v20;
        v17 = v20;
      }
      a2[4] = v16;
      *(_BYTE *)(v17 + v15) = 32;
      *(_BYTE *)(a2[3] + v15 + 1) = 0;
    }
    else
    {
      v14(a2, 32);
    }
    (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 64LL))(a2, 12);
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 104LL))(a2, (unsigned __int8)v8, 0);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 72LL))(a2, 12);
    v18 = *a2;
    *((_DWORD *)a2 + 36) |= 0x2000u;
    (*(void (__fastcall **)(_QWORD *, __int64))(v18 + 128))(a2, 0x80000000LL);
  }
  return v21 - __readfsqword(0x28u);
}

