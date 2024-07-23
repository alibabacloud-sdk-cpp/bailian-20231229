// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/bailian_20231229.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Bailian20231229;

Alibabacloud_Bailian20231229::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("bailian"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Bailian20231229::Client::getEndpoint(shared_ptr<string> productId,
                                                         shared_ptr<string> regionId,
                                                         shared_ptr<string> endpointRule,
                                                         shared_ptr<string> network,
                                                         shared_ptr<string> suffix,
                                                         shared_ptr<map<string, string>> endpointMap,
                                                         shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

AddFileResponse Alibabacloud_Bailian20231229::Client::addFileWithOptions(shared_ptr<string> WorkspaceId,
                                                                         shared_ptr<AddFileRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryId)) {
    body->insert(pair<string, string>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->leaseId)) {
    body->insert(pair<string, string>("LeaseId", *request->leaseId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parser)) {
    body->insert(pair<string, string>("Parser", *request->parser));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddFile"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/datacenter/file"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddFileResponse(callApi(params, req, runtime));
}

AddFileResponse Alibabacloud_Bailian20231229::Client::addFile(shared_ptr<string> WorkspaceId, shared_ptr<AddFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addFileWithOptions(WorkspaceId, request, headers, runtime);
}

ApplyFileUploadLeaseResponse Alibabacloud_Bailian20231229::Client::applyFileUploadLeaseWithOptions(shared_ptr<string> CategoryId,
                                                                                                   shared_ptr<string> WorkspaceId,
                                                                                                   shared_ptr<ApplyFileUploadLeaseRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    body->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->md5)) {
    body->insert(pair<string, string>("Md5", *request->md5));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sizeInBytes)) {
    body->insert(pair<string, string>("SizeInBytes", *request->sizeInBytes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyFileUploadLease"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/datacenter/category/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(CategoryId)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyFileUploadLeaseResponse(callApi(params, req, runtime));
}

ApplyFileUploadLeaseResponse Alibabacloud_Bailian20231229::Client::applyFileUploadLease(shared_ptr<string> CategoryId, shared_ptr<string> WorkspaceId, shared_ptr<ApplyFileUploadLeaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return applyFileUploadLeaseWithOptions(CategoryId, WorkspaceId, request, headers, runtime);
}

CreateIndexResponse Alibabacloud_Bailian20231229::Client::createIndexWithOptions(shared_ptr<string> WorkspaceId,
                                                                                 shared_ptr<CreateIndexRequest> tmpReq,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateIndexShrinkRequest> request = make_shared<CreateIndexShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->categoryIds)) {
    request->categoryIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->categoryIds, make_shared<string>("CategoryIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateIndexRequestColumns>>(tmpReq->columns)) {
    request->columnsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->columns, make_shared<string>("Columns"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->documentIds)) {
    request->documentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->documentIds, make_shared<string>("DocumentIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryIdsShrink)) {
    query->insert(pair<string, string>("CategoryIds", *request->categoryIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->chunkSize)) {
    query->insert(pair<string, long>("ChunkSize", *request->chunkSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->columnsShrink)) {
    query->insert(pair<string, string>("Columns", *request->columnsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->documentIdsShrink)) {
    query->insert(pair<string, string>("DocumentIds", *request->documentIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->embeddingModelName)) {
    query->insert(pair<string, string>("EmbeddingModelName", *request->embeddingModelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->overlapSize)) {
    query->insert(pair<string, long>("OverlapSize", *request->overlapSize));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->rerankMinScore)) {
    query->insert(pair<string, double>("RerankMinScore", *request->rerankMinScore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rerankModelName)) {
    query->insert(pair<string, string>("RerankModelName", *request->rerankModelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->separator)) {
    query->insert(pair<string, string>("Separator", *request->separator));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sinkInstanceId)) {
    query->insert(pair<string, string>("SinkInstanceId", *request->sinkInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sinkRegion)) {
    query->insert(pair<string, string>("SinkRegion", *request->sinkRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sinkType)) {
    query->insert(pair<string, string>("SinkType", *request->sinkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->structureType)) {
    query->insert(pair<string, string>("StructureType", *request->structureType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIndex"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/index/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIndexResponse(callApi(params, req, runtime));
}

CreateIndexResponse Alibabacloud_Bailian20231229::Client::createIndex(shared_ptr<string> WorkspaceId, shared_ptr<CreateIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createIndexWithOptions(WorkspaceId, request, headers, runtime);
}

DeleteFileResponse Alibabacloud_Bailian20231229::Client::deleteFileWithOptions(shared_ptr<string> FileId,
                                                                               shared_ptr<string> WorkspaceId,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFile"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/datacenter/file/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(FileId)) + string("/"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFileResponse(callApi(params, req, runtime));
}

DeleteFileResponse Alibabacloud_Bailian20231229::Client::deleteFile(shared_ptr<string> FileId, shared_ptr<string> WorkspaceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteFileWithOptions(FileId, WorkspaceId, headers, runtime);
}

DeleteIndexResponse Alibabacloud_Bailian20231229::Client::deleteIndexWithOptions(shared_ptr<string> WorkspaceId,
                                                                                 shared_ptr<DeleteIndexRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIndex"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/index/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIndexResponse(callApi(params, req, runtime));
}

DeleteIndexResponse Alibabacloud_Bailian20231229::Client::deleteIndex(shared_ptr<string> WorkspaceId, shared_ptr<DeleteIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteIndexWithOptions(WorkspaceId, request, headers, runtime);
}

DeleteIndexDocumentResponse Alibabacloud_Bailian20231229::Client::deleteIndexDocumentWithOptions(shared_ptr<string> WorkspaceId,
                                                                                                 shared_ptr<DeleteIndexDocumentRequest> tmpReq,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteIndexDocumentShrinkRequest> request = make_shared<DeleteIndexDocumentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->documentIds)) {
    request->documentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->documentIds, make_shared<string>("DocumentIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->documentIdsShrink)) {
    query->insert(pair<string, string>("DocumentIds", *request->documentIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIndexDocument"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/index/delete_index_document"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIndexDocumentResponse(callApi(params, req, runtime));
}

DeleteIndexDocumentResponse Alibabacloud_Bailian20231229::Client::deleteIndexDocument(shared_ptr<string> WorkspaceId, shared_ptr<DeleteIndexDocumentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteIndexDocumentWithOptions(WorkspaceId, request, headers, runtime);
}

DescribeFileResponse Alibabacloud_Bailian20231229::Client::describeFileWithOptions(shared_ptr<string> WorkspaceId,
                                                                                   shared_ptr<string> FileId,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFile"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/datacenter/file/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(FileId)) + string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFileResponse(callApi(params, req, runtime));
}

DescribeFileResponse Alibabacloud_Bailian20231229::Client::describeFile(shared_ptr<string> WorkspaceId, shared_ptr<string> FileId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeFileWithOptions(WorkspaceId, FileId, headers, runtime);
}

GetIndexJobStatusResponse Alibabacloud_Bailian20231229::Client::getIndexJobStatusWithOptions(shared_ptr<string> WorkspaceId,
                                                                                             shared_ptr<GetIndexJobStatusRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIndexJobStatus"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/index/job/status"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIndexJobStatusResponse(callApi(params, req, runtime));
}

GetIndexJobStatusResponse Alibabacloud_Bailian20231229::Client::getIndexJobStatus(shared_ptr<string> WorkspaceId, shared_ptr<GetIndexJobStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getIndexJobStatusWithOptions(WorkspaceId, request, headers, runtime);
}

ListChunksResponse Alibabacloud_Bailian20231229::Client::listChunksWithOptions(shared_ptr<string> WorkspaceId,
                                                                               shared_ptr<ListChunksRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->fields)) {
    body->insert(pair<string, vector<string>>("Fields", *request->fields));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filed)) {
    body->insert(pair<string, string>("Filed", *request->filed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    body->insert(pair<string, string>("IndexId", *request->indexId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListChunks"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/index/list_chunks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListChunksResponse(callApi(params, req, runtime));
}

ListChunksResponse Alibabacloud_Bailian20231229::Client::listChunks(shared_ptr<string> WorkspaceId, shared_ptr<ListChunksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listChunksWithOptions(WorkspaceId, request, headers, runtime);
}

ListIndexDocumentsResponse Alibabacloud_Bailian20231229::Client::listIndexDocumentsWithOptions(shared_ptr<string> WorkspaceId,
                                                                                               shared_ptr<ListIndexDocumentsRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->documentName)) {
    query->insert(pair<string, string>("DocumentName", *request->documentName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->documentStatus)) {
    query->insert(pair<string, string>("DocumentStatus", *request->documentStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIndexDocuments"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/index/list_index_documents"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIndexDocumentsResponse(callApi(params, req, runtime));
}

ListIndexDocumentsResponse Alibabacloud_Bailian20231229::Client::listIndexDocuments(shared_ptr<string> WorkspaceId, shared_ptr<ListIndexDocumentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listIndexDocumentsWithOptions(WorkspaceId, request, headers, runtime);
}

ListIndicesResponse Alibabacloud_Bailian20231229::Client::listIndicesWithOptions(shared_ptr<string> WorkspaceId,
                                                                                 shared_ptr<ListIndicesRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->indexName)) {
    query->insert(pair<string, string>("IndexName", *request->indexName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIndices"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/index/list_indices"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIndicesResponse(callApi(params, req, runtime));
}

ListIndicesResponse Alibabacloud_Bailian20231229::Client::listIndices(shared_ptr<string> WorkspaceId, shared_ptr<ListIndicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listIndicesWithOptions(WorkspaceId, request, headers, runtime);
}

RetrieveResponse Alibabacloud_Bailian20231229::Client::retrieveWithOptions(shared_ptr<string> WorkspaceId,
                                                                           shared_ptr<RetrieveRequest> tmpReq,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RetrieveShrinkRequest> request = make_shared<RetrieveShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<RetrieveRequestRerank>>(tmpReq->rerank)) {
    request->rerankShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->rerank, make_shared<string>("Rerank"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RetrieveRequestRewrite>>(tmpReq->rewrite)) {
    request->rewriteShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->rewrite, make_shared<string>("Rewrite"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<map<string, string>>>(tmpReq->searchFilters)) {
    request->searchFiltersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->searchFilters, make_shared<string>("SearchFilters"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->denseSimilarityTopK)) {
    query->insert(pair<string, long>("DenseSimilarityTopK", *request->denseSimilarityTopK));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableReranking)) {
    query->insert(pair<string, bool>("EnableReranking", *request->enableReranking));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableRewrite)) {
    query->insert(pair<string, bool>("EnableRewrite", *request->enableRewrite));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rerankShrink)) {
    query->insert(pair<string, string>("Rerank", *request->rerankShrink));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->rerankMinScore)) {
    query->insert(pair<string, double>("RerankMinScore", *request->rerankMinScore));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rerankTopN)) {
    query->insert(pair<string, long>("RerankTopN", *request->rerankTopN));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rewriteShrink)) {
    query->insert(pair<string, string>("Rewrite", *request->rewriteShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->saveRetrieverHistory)) {
    query->insert(pair<string, bool>("SaveRetrieverHistory", *request->saveRetrieverHistory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchFiltersShrink)) {
    query->insert(pair<string, string>("SearchFilters", *request->searchFiltersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sparseSimilarityTopK)) {
    query->insert(pair<string, long>("SparseSimilarityTopK", *request->sparseSimilarityTopK));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Retrieve"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/index/retrieve"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RetrieveResponse(callApi(params, req, runtime));
}

RetrieveResponse Alibabacloud_Bailian20231229::Client::retrieve(shared_ptr<string> WorkspaceId, shared_ptr<RetrieveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return retrieveWithOptions(WorkspaceId, request, headers, runtime);
}

SubmitIndexAddDocumentsJobResponse Alibabacloud_Bailian20231229::Client::submitIndexAddDocumentsJobWithOptions(shared_ptr<string> WorkspaceId,
                                                                                                               shared_ptr<SubmitIndexAddDocumentsJobRequest> tmpReq,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitIndexAddDocumentsJobShrinkRequest> request = make_shared<SubmitIndexAddDocumentsJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->categoryIds)) {
    request->categoryIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->categoryIds, make_shared<string>("CategoryIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->documentIds)) {
    request->documentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->documentIds, make_shared<string>("DocumentIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryIdsShrink)) {
    query->insert(pair<string, string>("CategoryIds", *request->categoryIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->documentIdsShrink)) {
    query->insert(pair<string, string>("DocumentIds", *request->documentIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitIndexAddDocumentsJob"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/index/add_documents_to_index"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitIndexAddDocumentsJobResponse(callApi(params, req, runtime));
}

SubmitIndexAddDocumentsJobResponse Alibabacloud_Bailian20231229::Client::submitIndexAddDocumentsJob(shared_ptr<string> WorkspaceId, shared_ptr<SubmitIndexAddDocumentsJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return submitIndexAddDocumentsJobWithOptions(WorkspaceId, request, headers, runtime);
}

SubmitIndexJobResponse Alibabacloud_Bailian20231229::Client::submitIndexJobWithOptions(shared_ptr<string> WorkspaceId,
                                                                                       shared_ptr<SubmitIndexJobRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitIndexJob"))},
    {"version", boost::any(string("2023-12-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/index/submit_index_job"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitIndexJobResponse(callApi(params, req, runtime));
}

SubmitIndexJobResponse Alibabacloud_Bailian20231229::Client::submitIndexJob(shared_ptr<string> WorkspaceId, shared_ptr<SubmitIndexJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return submitIndexJobWithOptions(WorkspaceId, request, headers, runtime);
}

