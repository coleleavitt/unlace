__int64 __fastcall sub_43C20(__int64 a1, __int64 a2, double a3, double a4, double a5)
{
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64); // rax
  unsigned int v8; // esi
  void *v9; // rbx
  unsigned int v10; // ebp
  void (__fastcall *v11)(void *); // rax
  _QWORD v13[3]; // [rsp+10h] [rbp-188h] BYREF
  int v14; // [rsp+28h] [rbp-170h] BYREF
  __int64 v15; // [rsp+30h] [rbp-168h]
  int *v16; // [rsp+38h] [rbp-160h]
  int *v17; // [rsp+40h] [rbp-158h]
  __int64 v18; // [rsp+48h] [rbp-150h]
  int v19; // [rsp+58h] [rbp-140h] BYREF
  __int64 v20; // [rsp+60h] [rbp-138h]
  int *v21; // [rsp+68h] [rbp-130h]
  int *v22; // [rsp+70h] [rbp-128h]
  __int64 v23; // [rsp+78h] [rbp-120h]
  int v24; // [rsp+88h] [rbp-110h] BYREF
  __int64 v25; // [rsp+90h] [rbp-108h]
  int *v26; // [rsp+98h] [rbp-100h]
  int *v27; // [rsp+A0h] [rbp-F8h]
  __int64 v28; // [rsp+A8h] [rbp-F0h]
  int v29; // [rsp+B8h] [rbp-E0h] BYREF
  __int64 v30; // [rsp+C0h] [rbp-D8h]
  int *v31; // [rsp+C8h] [rbp-D0h]
  int *v32; // [rsp+D0h] [rbp-C8h]
  __int64 v33; // [rsp+D8h] [rbp-C0h]
  int v34; // [rsp+E8h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+F0h] [rbp-A8h]
  int *v36; // [rsp+F8h] [rbp-A0h]
  int *v37; // [rsp+100h] [rbp-98h]
  __int64 v38; // [rsp+108h] [rbp-90h]
  int v39; // [rsp+118h] [rbp-80h] BYREF
  __int64 v40; // [rsp+120h] [rbp-78h]
  int *v41; // [rsp+128h] [rbp-70h]
  int *v42; // [rsp+130h] [rbp-68h]
  __int64 v43; // [rsp+138h] [rbp-60h]
  __int64 v44; // [rsp+140h] [rbp-58h]
  __int64 idati; // [rsp+148h] [rbp-50h]
  __int64 v46; // [rsp+150h] [rbp-48h]
  char v47; // [rsp+158h] [rbp-40h]
  int v48; // [rsp+15Ch] [rbp-3Ch]
  unsigned __int64 v49; // [rsp+168h] [rbp-30h]

  v49 = __readfsqword(0x28u);
  v13[1] = a1;
  v16 = &v14;
  v17 = &v14;
  v21 = &v19;
  v22 = &v19;
  v26 = &v24;
  v27 = &v24;
  v31 = &v29;
  v32 = &v29;
  v36 = &v34;
  v37 = &v34;
  v41 = &v39;
  v42 = &v39;
  v14 = 0;
  v15 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v43 = 0;
  v44 = 0;
  idati = get_idati(a1, a2);
  v6 = *(_QWORD *)a2;
  v47 = 0;
  v46 = a2;
  v48 = 0;
  v7 = *(__int64 (__fastcall **)(__int64))(v6 + 96);
  v13[0] = &off_AA2B8;
  if ( v7 == sub_23F10 )
    v8 = *(_DWORD *)(a2 + 32);
  else
    v8 = v7(a2);
  v9 = (void *)sub_42C40((__int64 *)a2, v8);
  v10 = sub_36240(v13, (__int64)v9, a3, a4, a5);
  if ( v9 )
  {
    v11 = *(void (__fastcall **)(void *))(*(_QWORD *)v9 + 296LL);
    if ( v11 == sub_243F0 )
      operator delete(v9, 0x18u);
    else
      v11(v9);
  }
  v13[0] = &off_AA2B8;
  sub_27D30(v13);
  return v10;
}

