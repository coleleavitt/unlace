__int64 __fastcall sub_10BE0(_QWORD *a1, int a2, double a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rax
  int v9; // ebp
  __int64 v10; // rax
  void *v11; // rsi
  _BYTE *v12; // [rsp+0h] [rbp-38h] BYREF
  __int128 v13; // [rsp+8h] [rbp-30h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( a2 > 15 )
  {
    v9 = a2 - 32;
    if ( (unsigned int)(a2 - 32) <= 0x1F )
    {
      v12 = nullptr;
      v13 = 0;
      v10 = qvector_reserve(&v12, 0, 6, 1, a6, a7);
      v12 = (_BYTE *)v10;
      v11 = &unk_16EE8;
      *(_QWORD *)&v13 = 6;
      *(_BYTE *)(v10 + 4) = 48;
      *(_DWORD *)v10 = 811823716;
      v12[5] = 0;
      v12[3] = (v9 > 8) + 48;
      v12[4] = (v9 & 7) + 48;
      if ( (_QWORD)v13 )
        v11 = v12;
      (*(void (__fastcall **)(_QWORD *, void *, _QWORD))(*a1 + 56LL))(a1, v11, 0);
      if ( v12 )
      {
        *(_QWORD *)&v13 = 0;
        qfree(v12);
      }
      return v14 - __readfsqword(0x28u);
    }
    else if ( (unsigned int)(a2 - 64) > 0x42 )
    {
      sub_6C80((__int64)"out: %a: bad regnum %d", a3, a1[29]);
      return (*(__int64 (__fastcall **)(_QWORD *, void *, _QWORD))(*a1 + 56LL))(a1, &unk_165DC, 0);
    }
    else
    {
      return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
               a1,
               *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * (a2 - 48)),
               33);
    }
  }
  else
  {
    v7 = 8LL * a2;
    if ( a2 == 15 )
      v7 = 376;
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
             a1,
             *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + v7),
             33);
  }
}

