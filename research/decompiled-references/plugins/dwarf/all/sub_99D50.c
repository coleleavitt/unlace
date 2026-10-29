__int64 __fastcall sub_99D50(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  _DWORD *v5; // r12
  char v6; // r14
  void (__fastcall *v8)(_QWORD *); // rdx
  void (__fastcall *v9)(_QWORD *); // rax
  _QWORD *v10; // r15
  __int64 v11; // r13
  void *v12; // rdi
  __int64 v13; // r13
  _QWORD *v14; // r15
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rbx
  _QWORD *segm_by_sel; // rax
  __int64 v20; // rax
  int v21; // [rsp+Ch] [rbp-14Ch] BYREF
  __int64 v22[4]; // [rsp+10h] [rbp-148h] BYREF
  __int128 v23; // [rsp+30h] [rbp-128h]
  __int128 v24; // [rsp+40h] [rbp-118h]
  __int64 v25; // [rsp+50h] [rbp-108h]
  __int128 v26; // [rsp+58h] [rbp-100h]
  __int64 v27; // [rsp+68h] [rbp-F0h]
  __int128 v28; // [rsp+70h] [rbp-E8h]
  __int64 v29; // [rsp+A8h] [rbp-B0h]
  __int128 v30; // [rsp+B0h] [rbp-A8h]
  __int64 v31; // [rsp+C0h] [rbp-98h]
  __int128 v32; // [rsp+C8h] [rbp-90h]
  __int64 v33; // [rsp+E4h] [rbp-74h]
  __int64 v34; // [rsp+ECh] [rbp-6Ch]
  __int64 v35; // [rsp+F4h] [rbp-64h]
  unsigned __int64 v36; // [rsp+FCh] [rbp-5Ch]
  __int64 v37; // [rsp+108h] [rbp-50h]
  unsigned __int64 v38; // [rsp+118h] [rbp-40h]

  v3 = a1[31];
  v38 = __readfsqword(0x28u);
  v4 = a2;
  if ( !v3 )
  {
    v3 = sub_87C20(*(_QWORD **)(*a1 + 16), *(_QWORD *)(*a1 + 24));
    a1[31] = v3;
  }
  v5 = *(_DWORD **)(v3 + 216);
  if ( v5 )
  {
    v6 = *((_BYTE *)v5 + 184);
    if ( !v5[2] )
    {
      v8 = **(void (__fastcall ***)(_QWORD *))v5;
      if ( v8 == sub_15E30 )
      {
        v9 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v5 + 16LL);
        if ( v9 == sub_15D70 )
        {
          v10 = *((_QWORD **)v5 + 16);
          *(_QWORD *)v5 = &off_C71D8;
          if ( v10 )
          {
            v11 = v10[2];
            while ( v11 )
            {
              sub_80300(*(_QWORD **)(v11 + 24));
              v12 = (void *)v11;
              v11 = *(_QWORD *)(v11 + 16);
              operator delete(v12, 0x30u);
            }
            operator delete(v10, 0x30u);
          }
          v13 = *((_QWORD *)v5 + 19);
          while ( v13 )
          {
            v14 = (_QWORD *)v13;
            sub_80A30(*(_QWORD **)(v13 + 24));
            v15 = *(_QWORD *)(v13 + 32);
            v13 = *(_QWORD *)(v13 + 16);
            if ( v15 )
            {
              v14[5] = 0;
              qfree(v15);
            }
            operator delete(v14, 0x48u);
          }
          v16 = *((_QWORD *)v5 + 12);
          if ( v16 )
          {
            *((_QWORD *)v5 + 13) = 0;
            qfree(v16);
          }
          operator delete(v5, 0xC0u);
          if ( !v6 )
            return v4;
          goto LABEL_20;
        }
        v9(v5);
      }
      else
      {
        v8(v5);
      }
    }
  }
  else
  {
    v6 = 0;
  }
  if ( !v6 )
    return v4;
LABEL_20:
  v17 = *a1;
  v22[0] = 0;
  v21 = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, int *, __int64 *))(a1[32] + 112))(
         *(_QWORD *)(v17 + 24),
         70,
         &v21,
         v22)
    || !v21 )
  {
    v20 = operator new(0x20u);
    *(_DWORD *)(v20 + 8) = 1;
    *(_QWORD *)v20 = off_C9528;
    v22[0] = v20;
    *(_OWORD *)(v20 + 16) = 0;
    v35 = 0x80000000LL;
    v22[3] = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v31 = 0;
    v37 = 0;
    v33 = 0;
    v34 = 0;
    v36 = 0xFFFFFFFF00000000LL;
    v23 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v30 = 0;
    v32 = 0;
    if ( !(unsigned __int8)sub_99400(a1, 70, v22) )
    {
      sub_1B750((__int64)v22);
      return v4;
    }
    v18 = sub_94BA0(v22);
    sub_1B750((__int64)v22);
  }
  else
  {
    v18 = sub_94BA0(a1);
  }
  if ( v18 != -1 )
  {
    segm_by_sel = (_QWORD *)get_segm_by_sel(v18);
    if ( segm_by_sel )
      return *segm_by_sel + a2;
  }
  return v4;
}
