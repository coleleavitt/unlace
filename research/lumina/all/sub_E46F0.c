__int64 __fastcall sub_E46F0(__int64 *a1, int *a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  int v5; // ebp
  unsigned int v6; // eax
  int v7; // ebp
  unsigned int v8; // edx
  int v9; // r13d
  __int64 v10; // rbx
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rdx
  int v14; // edx
  __int64 v15; // rdx
  int v16; // edx
  _QWORD v17[15]; // [rsp+0h] [rbp-78h] BYREF

  v17[7] = __readfsqword(0x28u);
  result = 0;
  if ( a2 )
  {
    v3 = *a1;
    v17[3] = 0;
    v17[5] = a1;
    v17[0] = v3;
    v17[1] = sub_105C10;
    v17[2] = sub_F8DF0;
    v5 = *((_DWORD *)a1 + 10);
    v6 = v5 & 0xF7FF6FEF;
    *((_DWORD *)a1 + 10) = v5 & 0xF7FF6FEF;
    v7 = v5 & 0x8009010;
    v8 = v6;
    if ( *a2 <= 0 )
    {
LABEL_11:
      result = 0;
      *((_DWORD *)a1 + 10) = v8 | v7;
    }
    else
    {
      v9 = 0;
      while ( 1 )
      {
        v10 = *(_QWORD *)&a2[6 * v9 + 2];
        if ( v10 )
        {
          v11 = v17[0];
          v12 = *(_DWORD *)(v17[0] + 300LL) + *(_DWORD *)(v10 + 40);
          v13 = *(_QWORD *)v17[0];
          *(_DWORD *)(v17[0] + 300LL) = v12;
          v14 = *(_DWORD *)(v13 + 148);
          if ( v12 > v14 )
          {
            sub_DBD10(v11, "Expression tree is too large (maximum depth %d)", v14);
            return 2;
          }
          sub_CDCD0((__int64)v17, v10);
          v15 = v17[0];
          *(_DWORD *)(v17[0] + 300LL) -= *(_DWORD *)(v10 + 40);
          v6 = *((_DWORD *)a1 + 10);
          if ( (v6 & 0x8009010) != 0 )
          {
            *(_DWORD *)(v10 + 4) |= a1[5] & 0x8010;
            v16 = *((_DWORD *)a1 + 10);
            v6 = v16 & 0xF7FF6FEF;
            *((_DWORD *)a1 + 10) = v16 & 0xF7FF6FEF;
            v7 |= v16 & 0x8009010;
            v15 = v17[0];
          }
          if ( *(int *)(v15 + 48) > 0 )
            return 2;
        }
        if ( *a2 <= ++v9 )
        {
          v8 = v6;
          goto LABEL_11;
        }
      }
    }
  }
  return result;
}
