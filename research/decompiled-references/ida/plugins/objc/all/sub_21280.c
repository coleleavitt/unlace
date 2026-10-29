__int64 __fastcall sub_21280(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+0h] [rbp-50h] BYREF
  __int64 v10; // [rsp+8h] [rbp-48h] BYREF
  __int128 v11; // [rsp+10h] [rbp-40h]
  unsigned __int64 v12; // [rsp+20h] [rbp-30h]

  v4 = *a1;
  v5 = a1[64] + a3;
  v12 = __readfsqword(0x28u);
  v11 = 0;
  v10 = 0;
  v9 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, __int64))(v4 + 136))(a1, &v9, v5)
    && get_strlit_contents() > 0 )
  {
    v7 = sub_1F890(a1[1], a4, a2, &v10, 0);
  }
  else
  {
    v7 = 0;
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  return v7;
}
