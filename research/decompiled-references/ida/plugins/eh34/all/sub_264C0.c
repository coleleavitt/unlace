__int64 __fastcall sub_264C0(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // r8
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // [rsp+0h] [rbp-8h]

  v2 = *(_QWORD **)(a1 + 296);
  v3 = (_QWORD *)(a1 + 288);
  if ( v2 )
  {
    v4 = (_QWORD *)(a1 + 288);
    do
    {
      while ( 1 )
      {
        v5 = v2[2];
        v6 = v2[3];
        if ( v2[4] >= a2 )
          break;
        v2 = (_QWORD *)v2[3];
        if ( !v6 )
          goto LABEL_6;
      }
      v4 = v2;
      v2 = (_QWORD *)v2[2];
    }
    while ( v5 );
LABEL_6:
    if ( v3 == v4 || a2 < v4[4] )
    {
      BYTE4(v8) = (_BYTE)v2;
      return v8;
    }
    else
    {
      LODWORD(v8) = *((_DWORD *)v4 + 10);
      BYTE4(v8) = 1;
      return v8;
    }
  }
  else
  {
    BYTE4(v8) = 0;
    return v8;
  }
}

