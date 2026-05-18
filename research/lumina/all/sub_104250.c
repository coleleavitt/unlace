__int64 __fastcall sub_104250(unsigned int *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r13
  unsigned int *v5; // rbx
  int v6; // r12d
  unsigned int v7; // r15d
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // [rsp+20h] [rbp-20h]
  __int64 v17; // [rsp+38h] [rbp-8h]

  while ( 1 )
  {
    v12 = *((_QWORD *)a1 + 1);
    if ( v12 )
    {
      v13 = *a1;
      if ( (unsigned int)v13 < a1[1] )
      {
        v14 = 16 * v13 + v12;
        *(_DWORD *)(v14 + 4) = a3;
        *(_BYTE *)v14 = a2;
        *(_BYTE *)(v14 + 1) = 0;
        *(_QWORD *)(v14 + 8) = a4;
        result = *a1;
        *a1 = result + 1;
        return result;
      }
    }
    if ( *((_BYTE *)a1 + 32) )
      break;
    v17 = v11;
    v16 = v10;
    v4 = a4;
    v5 = a1;
    v6 = a3;
    v7 = 2 * a1[1] + 10;
    v8 = *((_QWORD *)a1 + 1);
    if ( (unsigned int)sub_FEBD0(v8, a2) || (v9 = sub_D2640(v8, 16LL * v7)) == 0 )
    {
      *((_BYTE *)v5 + 32) = 1;
      return 0xFFFFFFFFLL;
    }
    v5[1] = v7;
    *((_QWORD *)v5 + 1) = v9;
    a4 = v4;
    a3 = v6;
    a2 = (unsigned int)a2;
    a1 = v5;
    v10 = v16;
    v11 = v17;
  }
  return 0xFFFFFFFFLL;
}
