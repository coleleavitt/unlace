void __fastcall sub_3C20(_QWORD *a1)
{
  *a1 = &off_AC88;
  qsem_free();
  operator delete(a1, 0x20u);
}

