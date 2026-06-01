__int64 __fastcall sub_349E0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // rax

  v3 = *(_QWORD *)(a1 + 16) - 1LL;
  if ( v3 >= 0 )
  {
    v4 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL * *(_QWORD *)(a1 + 16) - 32);
    while ( (unsigned __int64)a3 < *v4 || (unsigned __int64)a3 >= v4[1] )
    {
      --v3;
      v4 -= 4;
      if ( v3 == -1 )
        goto LABEL_6;
    }
    if ( a3 + v4[2] - *v4 != -1 )
      goto LABEL_7;
  }
LABEL_6:
  if ( a3 < *(_DWORD *)(a1 + 156) )
  {
LABEL_7:
    qlseek();
    return 1;
  }
  qlseek();
  return 0;
}

