unsigned __int64 __fastcall sub_841C0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  unsigned int v3; // r12d
  char v4; // r13
  int v5; // ebp
  __int64 v6; // rdx
  __int64 v8; // rax
  int v9; // r14d
  unsigned __int8 v10; // al
  __int64 v11; // [rsp+0h] [rbp-68h]
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]

  v2 = *a2;
  v12 = __readfsqword(0x28u);
  v11 = 0;
  getinf();
  get_ea_name();
  if ( sub_77A90(v2, 0) || v2 != get_problem() )
  {
    v3 = 27;
    v4 = 27;
  }
  else
  {
    v3 = 18;
    v4 = 18;
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, v3);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 80LL))(a1, v2);
  v5 = *(_DWORD *)(get_ash() + 328) & 8;
  if ( v5 )
  {
    v6 = (unsigned int)(unsigned __int8)getinf() - 4;
    if ( (int)v6 <= 0 )
      v6 = 1;
    sub_7DA30(a1, (__int64)&unk_91B9D, v6, 32, 0, v3, 0);
    if ( v4 != 18 )
      goto LABEL_7;
LABEL_13:
    (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, &unk_91BB7, 0);
    goto LABEL_7;
  }
  v8 = tag_strlen();
  v9 = 0;
  if ( v8 >= 0 )
    v9 = v5 - v8;
  v10 = getinf();
  sub_7DA30(a1, (__int64)&unk_91BAA, v9 + (unsigned int)v10 - 1, 0, v3);
  if ( v4 == 18 )
    goto LABEL_13;
LABEL_7:
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 128LL))(a1, 0);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
  if ( v11 )
    qfree();
  return v12 - __readfsqword(0x28u);
}
