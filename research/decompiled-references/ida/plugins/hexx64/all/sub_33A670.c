__int64 __fastcall sub_33A670(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rbx
  __int64 *v7; // r12
  __int64 module_data; // rax
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 *vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  vars0 = 0;
  vars8 = nullptr;
  v5 = sub_33A460(&vars0, a1, a3, a4);
  if ( !v5 )
  {
    if ( (_DWORD)vars0 != 4 )
      sub_33A030(a5);
    v7 = vars8;
    module_data = get_module_data();
    if ( !(unsigned __int8)sub_33A050((_OWORD *)(module_data + 608), v7) )
      v5 = 2;
  }
  jvalue_t_clear();
  return v5;
}

