_BOOL8 __fastcall sub_6280(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // rax
  bool v4; // zf
  __int64 v5; // rax
  _BYTE v7[8]; // [rsp+28h] [rbp-150h] BYREF
  __int64 v8; // [rsp+30h] [rbp-148h]
  char v9; // [rsp+51h] [rbp-127h]
  __int64 v10; // [rsp+58h] [rbp-120h]
  unsigned __int64 v11; // [rsp+168h] [rbp-10h] BYREF

  v11 = __readfsqword(0x28u);
  v3 = (unsigned __int64 *)v7;
  do
  {
    *(_WORD *)v3 = 0;
    v3 += 5;
    *((_WORD *)v3 - 19) = 0;
    *((_WORD *)v3 - 18) = 0;
    *((_DWORD *)v3 - 2) = 0;
    *((_WORD *)v3 - 17) = 0;
    *((_OWORD *)v3 - 2) = 0;
    *(v3 - 2) = 0;
  }
  while ( &v11 != v3 );
  v4 = *(_DWORD *)(a1 + 224) == 1;
  v7[1] = 5;
  v5 = 26624;
  if ( v4 )
    v5 = 26633;
  v8 = v5;
  v9 = 5;
  v10 = a3;
  return get_predef_insn_cmt() > 0;
}

