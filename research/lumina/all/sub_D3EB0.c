char *__fastcall sub_D3EB0(int a1, __int64 a2, int a3)
{
  int v3; // r12d
  char *result; // rax
  __int64 v6; // rcx
  __int64 *v7; // rbp
  __int64 v8; // rsi
  _BOOL8 v9; // rdx
  int v10; // ebx
  char *v11; // rbp
  int v12; // edx
  __int64 v13; // [rsp+8h] [rbp-30h]

  v3 = a2;
  result = (char *)sub_D2260(80 * dword_2421F4 + 88, a2);
  if ( result )
  {
    v7 = &qword_2421A0;
    if ( dword_2421F4 )
    {
      v7 = (__int64 *)(result + 88);
      *((_DWORD *)result + 26) = 10;
    }
    if ( !*((_WORD *)v7 + 23) )
    {
      v6 = 1;
      *((_WORD *)v7 + 23) = 1;
      v7[8] = (__int64)(v7 + 3);
      v7[9] = (__int64)(v7 + 3);
    }
    v8 = (__int64)(result + 64);
    *(_QWORD *)result = v7;
    *((_DWORD *)result + 4) = a1;
    *((_DWORD *)result + 6) = a1 + v3 + 56;
    v9 = a3 != 0;
    *((_DWORD *)result + 5) = v3;
    v13 = (__int64)result;
    *((_DWORD *)result + 7) = v9;
    sub_D3DB0((unsigned int *)result + 15, (__int64 *)result + 8, v9, v6);
    result = (char *)v13;
    if ( a3 )
    {
      *(_DWORD *)(v13 + 32) = 10;
      v10 = *((_DWORD *)v7 + 2);
      v11 = (char *)v7 + 20;
      v12 = v10 - *((_DWORD *)v11 - 2);
      *((_DWORD *)v11 - 2) += 10;
      *((_DWORD *)v11 - 1) = v12;
      *(_QWORD *)(v13 + 8) = v11;
    }
    else
    {
      *(_QWORD *)(v13 + 8) = v13 + 48;
    }
    if ( !*(_DWORD *)(v13 + 60) )
    {
      sub_CBF60(v13, v8);
      return nullptr;
    }
  }
  return result;
}
