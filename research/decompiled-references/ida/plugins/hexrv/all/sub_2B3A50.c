__int64 __fastcall sub_2B3A50(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( a2 != *(_QWORD *)(a1 + 1112) )
  {
    v3 = sub_2B1480(a2, 0);
    if ( v3 != -1 )
    {
      *(_QWORD *)(a1 + 1112) = a2;
      *(_QWORD *)(a1 + 1120) = v3;
    }
  }
  return netnode_delblob();
}

