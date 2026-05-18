bool __fastcall sub_32900(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  bool v4; // zf
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  _QWORD v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 368);
  v9[1] = __readfsqword(0x28u);
  if ( v3 )
  {
    v4 = (*(_DWORD *)(v3 + 8))-- == 1;
    if ( v4 )
      (***(void (__fastcall ****)(_QWORD))(a1 + 368))(*(_QWORD *)(a1 + 368));
  }
  v5 = *(_QWORD *)(a1 + 304);
  *(_QWORD *)(a1 + 368) = 0;
  unk_241E50(v9, v5 + 208, a2);
  v6 = *(_QWORD *)(a1 + 368);
  if ( v6 )
  {
    v4 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v4 )
      (***(void (__fastcall ****)(_QWORD))(a1 + 368))(*(_QWORD *)(a1 + 368));
  }
  v7 = v9[0];
  *(_QWORD *)(a1 + 368) = v9[0];
  if ( v7 && !*(_DWORD *)(v7 + 8) )
  {
    (**(void (__fastcall ***)(__int64))v7)(v7);
    v7 = *(_QWORD *)(a1 + 368);
  }
  return v7 != 0;
}
