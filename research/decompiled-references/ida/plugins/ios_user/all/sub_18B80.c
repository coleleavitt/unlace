void __fastcall sub_18B80(__int64 a1, unsigned __int64 *a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v4; // r8
  _QWORD *v5; // rax
  _QWORD *v6; // r9
  _QWORD *v7; // rdi

  if ( a3 == 6 && a4[1] > 1u && *(_QWORD *)*a4 == 258 )
  {
    v4 = *(_QWORD *)(*a4 + 8LL);
    v5 = *(_QWORD **)(a1 + 1648);
    v6 = (_QWORD *)(a1 + 1640);
    if ( v5 )
    {
      v7 = (_QWORD *)(a1 + 1640);
      do
      {
        if ( v5[4] < v4 )
        {
          v5 = (_QWORD *)v5[3];
        }
        else
        {
          v7 = v5;
          v5 = (_QWORD *)v5[2];
        }
      }
      while ( v5 );
      if ( v6 != v7 && v4 >= v7[4] && (unsigned int)(*((_DWORD *)v7 + 16) - 2) <= 2 )
        *a2 = v4;
    }
  }
}

