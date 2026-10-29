__int64 __fastcall sub_CA3A0(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // r11
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdi
  int v7; // ebx
  __int64 v8; // rax
  int v9; // ecx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    xmmword_241500(*(_QWORD *)(a1 + 24));
    v2 = *(_QWORD *)(a1 + 24);
  }
  if ( a2 )
  {
    v3 = sub_CA320(a1, a2);
    v4 = (unsigned int)v3;
    v5 = (unsigned int)v3;
    if ( v3 >= 0 )
      goto LABEL_5;
    v5 = (unsigned int)(v3 - 1);
  }
  else
  {
    v4 = 0;
    v5 = (unsigned int)(*(_DWORD *)(a1 + 40) - 1);
  }
  if ( (int)v4 > (int)v5 )
  {
    v7 = -1;
    goto LABEL_11;
  }
LABEL_5:
  v6 = *(_QWORD *)(a1 + 32);
  v7 = -1;
  do
  {
    v8 = *(_QWORD *)(v6 + 32LL * (int)v4 + 8);
    v9 = 0;
    if ( v8 )
      v9 = *(unsigned __int8 *)(v8 + 16);
    if ( v7 < v9 )
      v7 = v9;
    v4 = (unsigned int)(v4 + 1);
  }
  while ( (int)v5 >= (int)v4 );
LABEL_11:
  if ( v2 )
    xmmword_241510(v2, v5, v4);
  return (unsigned int)v7;
}
