__int64 __fastcall sub_10E50(unsigned __int8 **a1, unsigned __int64 a2, __int64 *a3, int a4)
{
  unsigned __int8 *v5; // rbp
  signed __int64 v7; // rsi
  int v8; // r13d
  int v9; // r15d
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  _BYTE *v13; // r14
  char v14; // al
  __int64 v16; // rax
  unsigned __int8 *v17[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = *a1;
  v17[1] = (unsigned __int8 *)__readfsqword(0x28u);
  v17[0] = v5;
  if ( a4 == -1 )
  {
    v8 = 0x7FFFFFFF;
  }
  else
  {
    v7 = a2 - (_QWORD)v5;
    v8 = a4;
    if ( v7 < 2 * a4 )
      sub_E890((__int64)"Not enough bytes left: %zd; expected at least %d", v7, 2 * a4);
    if ( a4 <= 0 )
    {
      v9 = 0;
      goto LABEL_11;
    }
  }
  v9 = 0;
  while ( (unsigned __int64)v5 < a2 )
  {
    v10 = a3[1];
    v11 = *a3;
    v12 = v10 + 1;
    if ( a3[2] < (unsigned __int64)(v10 + 1) )
    {
      v16 = qvector_reserve(a3, v11, v12, 2);
      v10 = a3[1];
      *a3 = v16;
      v11 = v16;
      v12 = v10 + 1;
    }
    a3[1] = v12;
    v13 = (_BYTE *)(v11 + 2 * v10);
    if ( *v5 == 46 )
    {
      v5 += 2;
      ++v9;
      *v13 = 0;
      v17[0] = v5;
      if ( v8 <= v9 )
        break;
    }
    else
    {
      *v13 = 1;
      ++v9;
      v14 = sub_10DE0(v17, a2);
      v5 = v17[0];
      v13[1] = v14;
      if ( v8 <= v9 )
        break;
    }
  }
LABEL_11:
  *a1 = v5;
  return (unsigned int)v9;
}

