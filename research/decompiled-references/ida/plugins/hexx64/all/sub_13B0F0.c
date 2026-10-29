__int64 __fastcall sub_13B0F0(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebp
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8[6]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 (__fastcall **v9)(); // [rsp+30h] [rbp-88h]
  __int64 v10; // [rsp+38h] [rbp-80h]
  __int64 v11; // [rsp+40h] [rbp-78h]
  __int64 v12; // [rsp+48h] [rbp-70h]
  __int64 v13; // [rsp+50h] [rbp-68h]
  char v14; // [rsp+58h] [rbp-60h]
  __int64 v15; // [rsp+60h] [rbp-58h]
  __int64 v16; // [rsp+68h] [rbp-50h]
  __int64 v17; // [rsp+70h] [rbp-48h] BYREF
  int v18; // [rsp+78h] [rbp-40h]
  unsigned __int64 v19; // [rsp+88h] [rbp-30h]

  v2 = 0;
  v5 = *(_QWORD *)(a1 + 1496);
  v19 = __readfsqword(0x28u);
  sub_33E140(v5, 0xFu, a1);
  if ( *(int *)(a1 + 312) <= 6 )
  {
    v7 = *(_QWORD *)(a1 + 1504);
    v10 = 0;
    v11 = 0;
    v8[5] = v7;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = v7;
    LODWORD(v7) = *(_DWORD *)(v7 + 56);
    memset(&v8[1], 0, 32);
    v8[0] = (__int64)off_4DDC60;
    v9 = off_4DDC38;
    v16 = 0;
    v17 = 0x200000001LL;
    v18 = v7;
    sub_11F9E0(a1, v8);
    if ( (_DWORD)v16 )
      sub_66FA0(a1, 1);
    if ( a2 )
      *a2 = v16;
    v8[0] = (__int64)off_4DDC60;
    v2 = HIDWORD(v16);
    v9 = off_4DDC38;
    sub_11CDA0((__int64)&v17);
  }
  return v2;
}

