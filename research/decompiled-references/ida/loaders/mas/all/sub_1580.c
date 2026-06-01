__int64 __fastcall sub_1580(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5, double a6)
{
  unsigned __int64 v7; // r14
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 selector; // rax

  if ( a2 == -1 )
    sub_1480((__int64)"wrong segment start address BADADDR");
  v7 = (unsigned int)(a2 + a3);
  v9 = qlseek(a1, 0, 1);
  v10 = v9;
  v11 = v9 + a3;
  if ( v7 < (unsigned int)a2 || v11 < v9 || v11 > qlsize(a1) )
    sub_1480((__int64)"wrong or too big segment %a..%a", a5, a6);
  file2base(a1, v10, (unsigned int)a2, v7, 1);
  selector = allocate_selector(0);
  return add_segm(selector, (unsigned int)a2, v7, a4, a4, 32);
}

