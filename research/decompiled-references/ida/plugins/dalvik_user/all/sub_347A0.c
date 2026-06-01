void __fastcall sub_347A0(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // r13
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a2 )
  {
    v3 = a2 + 1;
    if ( a2 == -1 )
    {
      v5 = 0;
    }
    else
    {
      v5 = qvector_reserve();
      v6 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)a1 = v5;
      if ( v6 < v3 )
      {
        do
        {
          v7 = v6;
          *(_BYTE *)(v5 + v6++) = a3;
          v5 = *(_QWORD *)a1;
        }
        while ( a2 != v7 );
      }
      *(_QWORD *)(a1 + 8) = v3;
    }
    *(_BYTE *)(v5 + a2) = 0;
  }
}

