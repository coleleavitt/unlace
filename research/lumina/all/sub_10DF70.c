__int64 __fastcall sub_10DF70(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rdx
  __int64 result; // rax
  unsigned int v6; // edx
  unsigned int v7; // eax
  unsigned int *v8; // rdi
  bool v9; // r13
  unsigned int v10; // r12d
  __int64 v11; // rdi
  __int64 v12; // r13
  unsigned int v13; // [rsp+Ch] [rbp-3Ch]
  _QWORD v14[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = a2;
  v4 = (_QWORD *)a1[9];
  v14[1] = __readfsqword(0x28u);
  if ( *v4
    || (result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *, _QWORD, _QWORD))(*a1 + 40LL))(
                   *a1,
                   0,
                   v4,
                   *((_DWORD *)a1 + 45) & 0x1087F61 | 0x1Eu,
                   0),
        !(_DWORD)result) )
  {
    v6 = *((_DWORD *)a1 + 11);
    v7 = *((_DWORD *)a1 + 8);
    if ( v6 < v7 && (*(_QWORD *)(a2 + 32) || v6 < *(_DWORD *)(a2 + 48)) )
    {
      v11 = a1[9];
      v14[0] = a1[25] * v7;
      if ( *(_QWORD *)v11 )
      {
        (*(void (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v11 + 80LL))(v11, 5, v14);
        v7 = *((_DWORD *)a1 + 8);
      }
      *((_DWORD *)a1 + 11) = v7;
    }
    if ( a2 )
    {
      do
      {
        v10 = *(_DWORD *)(v3 + 48);
        if ( *((_DWORD *)a1 + 8) < v10 || (*(_BYTE *)(v3 + 52) & 0x10) != 0 )
        {
          v9 = 1;
          result = 0;
        }
        else
        {
          if ( v10 == 1 )
          {
            sub_D5B40(v3);
            v12 = *(_QWORD *)(v3 + 8);
            result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)a1[9] + 24LL))(
                       a1[9],
                       v12,
                       *((unsigned int *)a1 + 50));
            *(__m128i *)(a1 + 17) = _mm_loadu_si128((const __m128i *)(v12 + 24));
          }
          else
          {
            result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1[9] + 24LL))(
                       a1[9],
                       *(_QWORD *)(v3 + 8),
                       a1[25],
                       a1[25] * (v10 - 1));
          }
          if ( *((_DWORD *)a1 + 10) < v10 )
            *((_DWORD *)a1 + 10) = v10;
          v8 = (unsigned int *)a1[14];
          ++*((_DWORD *)a1 + 64);
          v9 = (_DWORD)result == 0;
          if ( v8 )
          {
            v13 = result;
            sub_10D4F0(v8, v10, *(_QWORD *)(v3 + 8));
            result = v13;
          }
        }
        v3 = *(_QWORD *)(v3 + 32);
      }
      while ( v3 && v9 );
    }
    else
    {
      return 0;
    }
  }
  return result;
}
