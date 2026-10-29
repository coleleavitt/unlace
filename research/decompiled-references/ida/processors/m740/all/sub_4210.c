__int64 __fastcall sub_4210(_DWORD *a1)
{
  int v1; // eax
  __int64 (__fastcall *v2)(_QWORD *, char); // rax
  __int64 v3; // rbp
  unsigned __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 (__fastcall *v8)(_QWORD *, char); // rax
  __int64 v9; // rbp
  unsigned __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax

  v1 = a1[63];
  if ( (v1 & 1) != 0 )
  {
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 40);
    sub_40E0(a1, (__int64)(a1 + 66), 0);
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 79) + 4LL) & 4) == 0 )
    {
      v8 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v8 == sub_3EF0 )
      {
        v9 = *((_QWORD *)a1 + 4);
        if ( v9 )
        {
          v10 = v9 + 1;
          v11 = *((_QWORD *)a1 + 4);
          --v9;
        }
        else
        {
          v11 = 1;
          v10 = 2;
        }
        v12 = *((_QWORD *)a1 + 3);
        if ( *((_QWORD *)a1 + 5) < v10 )
        {
          v14 = qvector_reserve();
          *((_QWORD *)a1 + 3) = v14;
          v12 = v14;
        }
        *((_QWORD *)a1 + 4) = v10;
        *(_BYTE *)(v12 + v9) = 32;
        *(_BYTE *)(*((_QWORD *)a1 + 3) + v11) = 0;
      }
      else
      {
        v8(a1, 32);
      }
    }
    (*(void (__fastcall **)(_DWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
      a1,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 78) + 56LL) + 8LL * *((unsigned __int16 *)a1 + 135)),
      33);
    return (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 41);
  }
  else
  {
    if ( (v1 & 2) != 0 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 40);
      sub_40E0(a1, (__int64)(a1 + 66), 0);
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 41);
LABEL_5:
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
      v2 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v2 != sub_3EF0 )
      {
        v2(a1, 32);
        return (*(__int64 (__fastcall **)(_DWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
                 a1,
                 *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 78) + 56LL) + 8LL * *((unsigned __int16 *)a1 + 135)),
                 33);
      }
      v3 = *((_QWORD *)a1 + 4);
      if ( v3 )
      {
        v4 = v3 + 1;
        v5 = *((_QWORD *)a1 + 4);
        v6 = *((_QWORD *)a1 + 3);
        --v3;
        if ( *((_QWORD *)a1 + 5) >= v4 )
        {
LABEL_8:
          *((_QWORD *)a1 + 4) = v4;
          *(_BYTE *)(v6 + v3) = 32;
          *(_BYTE *)(*((_QWORD *)a1 + 3) + v5) = 0;
          return (*(__int64 (__fastcall **)(_DWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
                   a1,
                   *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 78) + 56LL) + 8LL * *((unsigned __int16 *)a1 + 135)),
                   33);
        }
      }
      else
      {
        v6 = *((_QWORD *)a1 + 3);
        v5 = 1;
        v4 = 2;
        if ( *((_QWORD *)a1 + 5) >= 2u )
          goto LABEL_8;
      }
      v13 = qvector_reserve();
      *((_QWORD *)a1 + 3) = v13;
      v6 = v13;
      goto LABEL_8;
    }
    if ( (v1 & 0x3C) != 0 )
    {
      sub_40E0(a1, (__int64)(a1 + 66), 0);
      goto LABEL_5;
    }
    if ( under_debugger )
      BUG();
    interr();
    return sub_4490(10023);
  }
}

