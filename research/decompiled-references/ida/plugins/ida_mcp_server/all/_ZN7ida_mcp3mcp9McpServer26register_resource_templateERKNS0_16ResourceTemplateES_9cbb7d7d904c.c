int __fastcall ida_mcp::mcp::McpServer::register_resource_template(__int64 a1, __int64 a2, const __m128i *a3)
{
  pthread_mutex_t *v3; // r14
  int v6; // eax
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __m128i v15; // xmm0
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned __int64 v23; // rdi
  __int64 v24; // rcx
  char *v25; // r9
  unsigned int v26; // edx
  unsigned int v27; // edx
  unsigned int v28; // ecx
  __int64 v29; // r8
  unsigned __int64 v30; // rdi
  __int64 v31; // rcx
  char *v32; // r9
  unsigned int v33; // edx
  unsigned int v34; // edx
  unsigned int v35; // ecx
  __int64 v36; // r8
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned __int64 v39; // r8
  __int64 v40; // rsi
  char *v41; // r10
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // esi
  __int64 v45; // r9
  unsigned __int64 v46; // r8
  __int64 v47; // rsi
  char *v48; // r10
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  unsigned int v51; // esi
  __int64 v52; // r9
  void *v53; // [rsp+10h] [rbp-F8h]
  __int64 v54; // [rsp+18h] [rbp-F0h]
  _QWORD v55[2]; // [rsp+20h] [rbp-E8h] BYREF
  void *v56; // [rsp+30h] [rbp-D8h]
  __int64 v57; // [rsp+38h] [rbp-D0h]
  _QWORD v58[2]; // [rsp+40h] [rbp-C8h] BYREF
  void *v59; // [rsp+50h] [rbp-B8h]
  __int64 v60; // [rsp+58h] [rbp-B0h]
  _QWORD v61[2]; // [rsp+60h] [rbp-A8h] BYREF
  char v62; // [rsp+70h] [rbp-98h]
  void *v63; // [rsp+78h] [rbp-90h]
  __int64 v64; // [rsp+80h] [rbp-88h]
  _QWORD v65[2]; // [rsp+88h] [rbp-80h] BYREF
  char v66; // [rsp+98h] [rbp-70h]
  __m128i v67; // [rsp+A0h] [rbp-68h] BYREF
  void (__fastcall *v68)(__m128i *, __m128i *, __int64); // [rsp+B0h] [rbp-58h]
  __int64 v69; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v70; // [rsp+C8h] [rbp-40h]

  v3 = (pthread_mutex_t *)(a1 + 224);
  v70 = __readfsqword(0x28u);
  v6 = pthread_mutex_lock((pthread_mutex_t *)(a1 + 224));
  if ( v6 )
    std::__throw_system_error(v6);
  v53 = v55;
  std::string::_M_construct<true>();
  v56 = v58;
  std::string::_M_construct<true>();
  v62 = 0;
  if ( *(_BYTE *)(a2 + 96) )
  {
    v59 = v61;
    std::string::_M_construct<true>();
    v62 = 1;
  }
  v66 = 0;
  if ( *(_BYTE *)(a2 + 136) )
  {
    v63 = v65;
    std::string::_M_construct<true>();
    v66 = 1;
  }
  v7 = a3[1].m128i_i64[1];
  v68 = nullptr;
  v67 = 0;
  v69 = v7;
  if ( a3[1].m128i_i64[0] )
  {
    v8 = _mm_loadu_si128(a3);
    v68 = (void (__fastcall *)(__m128i *, __m128i *, __int64))a3[1].m128i_i64[0];
    v67 = v8;
    a3[1] = 0;
  }
  v9 = *(_QWORD *)(a1 + 104);
  if ( v9 == *(_QWORD *)(a1 + 112) )
  {
    std::vector<ida_mcp::mcp::McpServer::ResourceTemplateEntry>::_M_realloc_append<ida_mcp::mcp::McpServer::ResourceTemplateEntry>();
    if ( v68 )
      v68(&v67, &v67, 3);
  }
  else
  {
    v10 = v9 + 16;
    v11 = v54;
    *(_QWORD *)v9 = v9 + 16;
    if ( v53 == v55 )
    {
      v21 = v11 + 1;
      if ( (unsigned int)(v11 + 1) >= 8 )
      {
        *(_QWORD *)(v9 + 16) = v55[0];
        *(_QWORD *)(v10 + v21 - 8) = *(_QWORD *)((char *)&v55[-1] + v21);
        v23 = (v9 + 24) & 0xFFFFFFFFFFFFFFF8LL;
        v24 = v10 - v23;
        v25 = (char *)v55 - v24;
        v26 = (v24 + v21) & 0xFFFFFFF8;
        if ( v26 >= 8 )
        {
          v27 = v26 & 0xFFFFFFF8;
          v28 = 0;
          do
          {
            v29 = v28;
            v28 += 8;
            *(_QWORD *)(v23 + v29) = *(_QWORD *)&v25[v29];
          }
          while ( v28 < v27 );
        }
      }
      else if ( (v21 & 4) != 0 )
      {
        *(_DWORD *)(v9 + 16) = v55[0];
        *(_DWORD *)(v10 + v21 - 4) = *(_DWORD *)((char *)&v54 + v21 + 4);
      }
      else if ( (_DWORD)v11 != -1 )
      {
        *(_BYTE *)(v9 + 16) = v55[0];
        if ( (v21 & 2) != 0 )
          *(_WORD *)(v10 + v21 - 2) = *(_WORD *)((char *)&v54 + v21 + 6);
      }
    }
    else
    {
      *(_QWORD *)v9 = v53;
      *(_QWORD *)(v9 + 16) = v55[0];
    }
    v12 = v9 + 48;
    *(_QWORD *)(v9 + 8) = v11;
    v13 = v57;
    *(_QWORD *)(v9 + 32) = v9 + 48;
    v53 = v55;
    LOBYTE(v55[0]) = 0;
    if ( v56 == v58 )
    {
      v22 = v13 + 1;
      if ( (unsigned int)(v13 + 1) >= 8 )
      {
        *(_QWORD *)(v9 + 48) = v58[0];
        *(_QWORD *)(v12 + v22 - 8) = *(_QWORD *)((char *)&v58[-1] + v22);
        v30 = (v9 + 56) & 0xFFFFFFFFFFFFFFF8LL;
        v31 = v12 - v30;
        v32 = (char *)v58 - v31;
        v33 = (v31 + v22) & 0xFFFFFFF8;
        if ( v33 >= 8 )
        {
          v34 = v33 & 0xFFFFFFF8;
          v35 = 0;
          do
          {
            v36 = v35;
            v35 += 8;
            *(_QWORD *)(v30 + v36) = *(_QWORD *)&v32[v36];
          }
          while ( v35 < v34 );
        }
      }
      else if ( (v22 & 4) != 0 )
      {
        *(_DWORD *)(v9 + 48) = v58[0];
        *(_DWORD *)(v12 + v22 - 4) = *(_DWORD *)((char *)&v57 + v22 + 4);
      }
      else if ( (_DWORD)v13 != -1 )
      {
        *(_BYTE *)(v9 + 48) = v58[0];
        if ( (v22 & 2) != 0 )
          *(_WORD *)(v12 + v22 - 2) = *(_WORD *)((char *)&v57 + v22 + 6);
      }
    }
    else
    {
      *(_QWORD *)(v9 + 32) = v56;
      *(_QWORD *)(v9 + 48) = v58[0];
    }
    *(_QWORD *)(v9 + 40) = v13;
    v56 = v58;
    LOBYTE(v58[0]) = 0;
    *(_BYTE *)(v9 + 96) = 0;
    if ( v62 )
    {
      v19 = v9 + 80;
      v20 = v60;
      *(_QWORD *)(v9 + 64) = v9 + 80;
      if ( v59 == v61 )
      {
        v37 = v20 + 1;
        if ( (unsigned int)(v20 + 1) >= 8 )
        {
          *(_QWORD *)(v9 + 80) = v61[0];
          *(_QWORD *)(v19 + v37 - 8) = *(_QWORD *)((char *)&v61[-1] + v37);
          v39 = (v9 + 88) & 0xFFFFFFFFFFFFFFF8LL;
          v40 = v19 - v39;
          v41 = (char *)v61 - v40;
          v42 = (v40 + v37) & 0xFFFFFFF8;
          if ( v42 >= 8 )
          {
            v43 = v42 & 0xFFFFFFF8;
            v44 = 0;
            do
            {
              v45 = v44;
              v44 += 8;
              *(_QWORD *)(v39 + v45) = *(_QWORD *)&v41[v45];
            }
            while ( v44 < v43 );
          }
        }
        else if ( (v37 & 4) != 0 )
        {
          *(_DWORD *)(v9 + 80) = v61[0];
          *(_DWORD *)(v19 + v37 - 4) = *(_DWORD *)((char *)&v60 + v37 + 4);
        }
        else if ( (_DWORD)v20 != -1 )
        {
          *(_BYTE *)(v9 + 80) = v61[0];
          if ( (v37 & 2) != 0 )
            *(_WORD *)(v19 + v37 - 2) = *(_WORD *)((char *)&v60 + v37 + 6);
        }
      }
      else
      {
        *(_QWORD *)(v9 + 64) = v59;
        *(_QWORD *)(v9 + 80) = v61[0];
      }
      *(_QWORD *)(v9 + 72) = v20;
      v59 = v61;
      LOBYTE(v61[0]) = 0;
      *(_BYTE *)(v9 + 96) = 1;
    }
    *(_BYTE *)(v9 + 136) = 0;
    if ( v66 )
    {
      v17 = v9 + 120;
      v18 = v64;
      *(_QWORD *)(v9 + 104) = v9 + 120;
      if ( v63 == v65 )
      {
        v38 = v18 + 1;
        if ( (unsigned int)(v18 + 1) >= 8 )
        {
          *(_QWORD *)(v9 + 120) = v65[0];
          *(_QWORD *)(v17 + v38 - 8) = *(_QWORD *)((char *)&v65[-1] + v38);
          v46 = (v9 + 128) & 0xFFFFFFFFFFFFFFF8LL;
          v47 = v17 - v46;
          v48 = (char *)v65 - v47;
          v49 = (v47 + v38) & 0xFFFFFFF8;
          if ( v49 >= 8 )
          {
            v50 = v49 & 0xFFFFFFF8;
            v51 = 0;
            do
            {
              v52 = v51;
              v51 += 8;
              *(_QWORD *)(v46 + v52) = *(_QWORD *)&v48[v52];
            }
            while ( v51 < v50 );
          }
        }
        else if ( (v38 & 4) != 0 )
        {
          *(_DWORD *)(v9 + 120) = v65[0];
          *(_DWORD *)(v17 + v38 - 4) = *(_DWORD *)((char *)&v64 + v38 + 4);
        }
        else if ( (_DWORD)v18 != -1 )
        {
          *(_BYTE *)(v9 + 120) = v65[0];
          if ( (v38 & 2) != 0 )
            *(_WORD *)(v17 + v38 - 2) = *(_WORD *)((char *)&v64 + v38 + 6);
        }
      }
      else
      {
        *(_QWORD *)(v9 + 104) = v63;
        *(_QWORD *)(v9 + 120) = v65[0];
      }
      *(_QWORD *)(v9 + 112) = v18;
      v63 = v65;
      LOBYTE(v65[0]) = 0;
      *(_BYTE *)(v9 + 136) = 1;
    }
    v14 = v69;
    *(_QWORD *)(v9 + 160) = 0;
    *(_OWORD *)(v9 + 144) = 0;
    *(_QWORD *)(v9 + 168) = v14;
    if ( v68 )
    {
      v15 = _mm_load_si128(&v67);
      *(_QWORD *)(v9 + 160) = v68;
      *(__m128i *)(v9 + 144) = v15;
    }
    *(_QWORD *)(a1 + 104) += 176LL;
  }
  if ( v66 && v63 != v65 )
    operator delete(v63, v65[0] + 1LL);
  if ( v62 && v59 != v61 )
    operator delete(v59, v61[0] + 1LL);
  if ( v56 != v58 )
    operator delete(v56, v58[0] + 1LL);
  if ( v53 != v55 )
    operator delete(v53, v55[0] + 1LL);
  return pthread_mutex_unlock(v3);
}

