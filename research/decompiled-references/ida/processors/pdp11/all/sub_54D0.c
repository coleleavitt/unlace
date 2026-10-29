__int64 __fastcall sub_54D0(__int64 a1, _QWORD *a2, __int64 a3)
{
  bool v4; // zf
  __int64 v7; // r13
  __int64 v8; // r13
  __int64 (__fastcall *v9)(_QWORD *, char); // rax
  __int64 v10; // rbp
  unsigned __int64 v11; // r12
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rax
  _BYTE v15[144]; // [rsp+20h] [rbp-148h] BYREF
  _BYTE v16[136]; // [rsp+B0h] [rbp-B8h] BYREF
  unsigned __int64 v17; // [rsp+138h] [rbp-30h]

  v4 = *(_BYTE *)(a3 + 184) == 12;
  v17 = __readfsqword(0x28u);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a2 + 136LL))(a2, byte_735D, 0xFFFF);
  }
  else
  {
    get_segm_name();
    sub_4C60((__int64)a2, (__int64)&qword_7368, &dword_7564);
    if ( *(_QWORD *)(a3 + 32) )
    {
      btoa64();
      btoa64();
      sub_4C60((__int64)a2, (__int64)qword_75A8, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), v15, v16);
    }
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a2 + 128LL))(a2, 0);
  }
  if ( (getinf() & 0x100) == 0 )
    return v17 - __readfsqword(0x28u);
  v7 = a2[2];
  v8 = v7 - get_segm_base();
  if ( !v8 || *(unsigned __int16 *)(a1 + 136) == v8 || (*(_BYTE *)(a3 + 44) & 1) == 0 )
    return v17 - __readfsqword(0x28u);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 64LL))(a2, 27);
  (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 56LL))(a2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL), 0);
  (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 56LL))(a2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 168LL), 0);
  if ( *(_BYTE *)(a3 + 184) != 12 )
  {
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 56LL))(a2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL), 0);
    v9 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
    if ( v9 == sub_4A80 )
    {
      v10 = a2[4];
      if ( v10 )
      {
        v11 = v10 + 1;
        v12 = a2[4];
        --v10;
      }
      else
      {
        v12 = 1;
        v11 = 2;
      }
      v13 = a2[3];
      if ( a2[5] < v11 )
      {
        v14 = qvector_reserve();
        a2[3] = v14;
        v13 = v14;
      }
      a2[4] = v11;
      *(_BYTE *)(v13 + v10) = 43;
      *(_BYTE *)(a2[3] + v12) = 0;
    }
    else
    {
      v9(a2, 43);
    }
  }
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a2 + 104LL))(a2, v8, 0);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 72LL))(a2, 27);
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a2 + 128LL))(a2, 0xFFFF);
}

