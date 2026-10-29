__int64 __fastcall sub_6460(_QWORD *a1, char a2)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // rax

  v3 = a1[4];
  if ( !v3 )
  {
    v6 = a1[3];
    v5 = 1;
    v4 = 2;
    if ( a1[5] >= 2u )
      goto LABEL_3;
LABEL_5:
    v8 = qvector_reserve();
    a1[3] = v8;
    v6 = v8;
    goto LABEL_3;
  }
  v4 = v3 + 1;
  v5 = a1[4];
  v6 = a1[3];
  --v3;
  if ( a1[5] < v4 )
    goto LABEL_5;
LABEL_3:
  a1[4] = v4;
  *(_BYTE *)(v6 + v3) = a2;
  result = a1[3];
  *(_BYTE *)(result + v5) = 0;
  return result;
}

