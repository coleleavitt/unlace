__int64 __fastcall sub_3369B0(__int64 *a1, int a2, _QWORD *a3, double a4)
{
  __int64 v4; // r12
  __int64 module_data; // rax

  if ( !a3 )
  {
    module_data = get_module_data();
    goto LABEL_7;
  }
  v4 = a3[61];
  if ( v4 == -1 )
  {
    v4 = a3[5];
    if ( v4 == -1 )
    {
      module_data = a3[187];
LABEL_7:
      v4 = *(_QWORD *)(module_data + 408);
    }
  }
  if ( (unsigned int)(1 - a2) > 0x24 )
    sub_328920(a4);
  sub_6B870(a1);
  return v4;
}

