void __fastcall sub_1661A0(void **a1)
{
  _QWORD **v2; // rbx
  void *v3; // rdi

  *a1 = &off_23C248;
  sub_19A260(a1[7]);
  v2 = (_QWORD **)a1[3];
  *a1 = &off_23C210;
  while ( v2 )
  {
    sub_165EF0(v2[3]);
    v3 = v2;
    v2 = (_QWORD **)v2[2];
    operator delete(v3, 0x30u);
  }
  operator delete(a1, 0x40u);
}
