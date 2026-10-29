__int64 __fastcall sub_100E0(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rax
  _QWORD *v3; // rbp
  __int64 v4; // rbx

  v1 = *(_QWORD *)(a1 + 184);
  v2 = (unsigned int)sub_C5C0(v1 + 120, *(_QWORD *)(a1 + 192)) - 1;
  if ( v2 >= *(_QWORD *)(v1 + 176) )
  {
    sub_100C0();
    return sub_10150();
  }
  else
  {
    v3 = (_QWORD *)(*(_QWORD *)(v1 + 168) + 8 * v2);
    v4 = netnode_suplast(*v3, 85);
    return v4 - netnode_supfirst(*v3, 85);
  }
}

