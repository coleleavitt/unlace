void __fastcall sub_DCED0(__int64 *a1, _DWORD *a2, __int64 a3)
{
  int v3; // eax
  int v4; // ebp
  __int64 v5; // rax
  _DWORD *v6; // rdx

  if ( a2 )
  {
    v3 = *(_DWORD *)(a3 + 8);
    if ( v3 )
    {
      v4 = *a2 - 1;
      if ( v3 == 1 && !*(_QWORD *)a3 )
      {
        BYTE1(a2[26 * v4 + 17]) |= 1u;
      }
      else
      {
        v5 = sub_DCE50(*a1, a3);
        v6 = &a2[26 * v4];
        *((_BYTE *)v6 + 69) |= 2u;
        *((_QWORD *)v6 + 12) = v5;
      }
    }
  }
}
