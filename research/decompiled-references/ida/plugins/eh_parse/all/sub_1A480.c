void __fastcall sub_1A480(__int64 a1, __int64 a2)
{
  __int64 fchunk; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD v7[5]; // [rsp+0h] [rbp-B8h] BYREF
  __int16 v8; // [rsp+28h] [rbp-90h]
  __int128 v9; // [rsp+30h] [rbp-88h]
  __int64 v10; // [rsp+40h] [rbp-78h]
  __int64 v11; // [rsp+48h] [rbp-70h]
  int v12; // [rsp+50h] [rbp-68h]
  __int64 v13; // [rsp+58h] [rbp-60h]
  int v14; // [rsp+60h] [rbp-58h]
  __int64 v15; // [rsp+68h] [rbp-50h]
  int v16; // [rsp+70h] [rbp-48h]
  __int64 v17; // [rsp+78h] [rbp-40h]
  int v18; // [rsp+80h] [rbp-38h]
  __int64 v19; // [rsp+88h] [rbp-30h]
  unsigned __int64 v20; // [rsp+98h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  if ( (get_aflags(a2) & 0x20000000) == 0 && (unsigned __int8)is_mapped(a2) && getseg(a2) )
  {
    fchunk = get_fchunk(a2);
    if ( !fchunk || *(char *)(fchunk + 17) < 0 )
      goto LABEL_9;
    if ( a2 != *(_QWORD *)fchunk )
    {
      set_func_end(*(_QWORD *)fchunk, a2);
LABEL_9:
      v7[0] = a2;
      v8 = 0;
      v7[1] = -1;
      v7[2] = 512;
      v7[3] = -1;
      v7[4] = 0;
      v10 = 0xFFFFFFFFLL;
      v11 = 0;
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v9 = 0;
      ((void (__fastcall *)(_QWORD *, __int64, __int64, __int64, __int64, __int64))add_func_ex)(v7, a2, v3, v4, v5, v6);
      sub_11390(a1);
    }
  }
}

