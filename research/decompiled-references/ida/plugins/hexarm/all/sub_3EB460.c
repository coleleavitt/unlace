bool __fastcall sub_3EB460(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r14
  int v4; // ebp
  void *(*v5)(); // rdx
  int v6; // eax
  int v7; // eax
  __int64 v8; // r14
  int v9; // ebp
  void *(*v10)(); // rdx
  int v11; // eax
  bool result; // al
  unsigned __int64 v13; // rax
  __int64 v14; // rbp

  if ( !*(_BYTE *)(a1 + 400)
    || (v14 = *(_QWORD *)a2,
        v14 <= (int)(sub_F27C0(*(_QWORD *)(a1 + 280))
                   + 4 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 280) + 1504LL) + 80LL))) )
  {
    if ( (*(_QWORD *)(a2 + 8) != -1 || !*(_DWORD *)(a2 + 24)) && (*(_QWORD *)(a2 + 16) != -1 || !*(_DWORD *)(a2 + 28)) )
    {
      sub_1992D0(a1, a2);
      v2 = *(_DWORD *)(a2 + 24);
      if ( v2 <= 0 )
      {
        v3 = *(_QWORD *)(a1 + 24);
        v4 = -v2;
        v5 = *(void *(**)())(*(_QWORD *)a1 + 24LL);
        v6 = 8;
        if ( v5 != sub_3EA1E0 )
          v6 = *(char *)(((__int64 (__fastcall *)(__int64))v5)(a1) + 12);
        if ( v4 <= (int)v3 * v6 )
        {
          v7 = *(_DWORD *)(a2 + 28);
          if ( v7 <= 0 )
          {
            v8 = *(_QWORD *)(a1 + 48);
            v9 = -v7;
            v10 = *(void *(**)())(*(_QWORD *)a1 + 24LL);
            v11 = 16;
            if ( v10 != sub_3EA1E0 )
              v11 = *(char *)(((__int64 (__fastcall *)(__int64))v10)(a1) + 13);
            if ( v9 <= (int)v8 * v11
              && (-*(_DWORD *)(a2 + 24) & 7) == 0
              && (-*(_DWORD *)(a2 + 28) & 0xF) == 0
              && *(_DWORD *)(a2 + 24) >= *(_DWORD *)(a1 + 384)
              && *(_DWORD *)(a2 + 28) >= *(_DWORD *)(a1 + 388) )
            {
              result = 1;
              if ( !*(_BYTE *)(a1 + 400) )
                return result;
              v13 = *(_QWORD *)(*(_QWORD *)(a1 + 280) + 144LL);
              if ( v13 >= *(_QWORD *)(a2 + 8) )
                return v13 >= *(_QWORD *)(a2 + 16);
            }
          }
        }
      }
    }
  }
  return 0;
}

